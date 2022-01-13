#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class student
{
private:
    char name[20];
    int roll;
    float marks;
public:
    student();
        void setdata()
    {
        cout<<"enter your name=>"<<endl;
        gets(name);
        cout<<"enter your roll number="<<endl;
        cin>>roll;
        cout<<"enter  tour marks=>"<<endl;
        cin>>marks;
    }
    void showdata()
    {
        cout<<"your name is="<<name<<endl;
        cout<<"your roll number is="<<roll<<endl;
        cout<<"your marks is="<<marks<<endl;
    }
};
student::student()
{
    cout<<"constructor is called "<<endl;
    strcpy(name,"unknown");
    marks=0.98;
    roll=67;
}
int main()
{
    student s1;
    s1.setdata();
    s1.showdata();
    student s2;
    s2.showdata();
    return 0;
}

