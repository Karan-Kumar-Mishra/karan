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
    //defalt argument
    student(char namep[20],int rollp,float marksp=90.6);
    student (student &s);
    void setdata()
    {
        cout<<"enter your name=>"<<endl;
        gets(name);
        cout<<"enter your roll number="<<endl;
        cin>>roll;
        cout<<"enter your marks=>"<<endl;
        cin>>marks;
    }
    void showdata()
    {
        cout<<"your name is="<<name<<endl;
        cout<<"your roll number is="<<roll<<endl;
        cout<<"your marks is="<<marks<<endl;
    }
};
student::student(student &s)
{
    cout<<"copyeconstructor is called"<<endl;
    strcpy(name,s.name);
    roll=s.roll;
    marks=s.marks;
}
student::student()
{
    cout<<"non parametrize constructor is called"<<endl;
    strcpy(name,"unknown");
    roll=89;
    marks=0.58f;
}
student::student(char namep[20],int rollp,float marksp)
{
    strcpy(name,namep);
    roll=rollp;
    marks=marksp;
}
int main()
{
    student s1;
    s1.setdata();
    student s2(s1);
    s1.showdata();
    s2.setdata();
    student s3("zack",67,90.7f);
    s3.showdata();
    return 0;
}


