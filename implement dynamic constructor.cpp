#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class student
{
private:
    char name[20];
    int roll;
    int *marks;
    int sub;
    float avg;
public: 
    ~student();
    student();
    void setdata();
    void showdata();
    void calculate();
};
student::student()
{
    cout<<"dynamic constructor is called"<<endl;
    cout<<"enter number of subject"<<endl;
    cin>>sub;
    marks=new int[sub];
}
student::~student()
{
    delete marks;
}
void student::setdata()
{
    cout<<"enter your name=>"<<endl;
    gets(name);
    cout<<"enter your roll number="<<endl;
    cin>>roll;
    for(int i=0; i<sub; i++)
    {
        cout<<"subject"<<i+1<<" ";
        cin>>*(marks+i);
    }
}
void student::calculate()
{
    int sum=0;
    for(int i=0; i<sub;i++)
    {
        sum=sum+*(marks+i);
    }
    avg=(float)sum/sub;
}
void student::showdata()
{
    cout<<"your name is="<<name<<endl;
    cout<<"your roll number is="<<roll<<endl;
    cout<<"your marks is="<<marks<<endl;
}
int main()
{
    student s;
    s.setdata();
    s.calculate();
    s.showdata();
    return 0;
}

