#include<iostream>
#include<string.h>
using namespace std;
//constructor with dynmic operation
 class student
{
private:
    char name[30];
    int rno;
    int subject;
    int *marks;
    float avg;
public:
    student();
    ~student();
    void input();
    void calculate(); 
    void display();
};
student::student()
{
    cout<<"dynmic constructor is called"<<endl;
    cout<<"enter the number of subject=>"<<endl;
    cin>>subject;
    marks=new int[subject];
}
student::~student()
{
    delete marks;
}
void student::input()
{
    cout<<"enter student name=>"<<endl;
    gets(name);
    cout<<"enter roll number=>"<<endl;
    cin>>rno;
    for(int i=0; i<=subject; i++)
    {
        cout<<"subject"<<i+1<<":";
        cin>>*(marks+i);
    }
}
void student::calculate()
{
    int sum=0;
    for(int i=0; i<=subject; i++)
    {
        sum=sum+*(marks+i);
    }
}
void student:: display()
{
    cout<<"the name of student is=>"<<name<<endl;      
    cout<<"the roll number of student is =>"<<rno<<endl;   
    cout<<"the of subject is =>"<<subject<<endl;

    for(int i=0; i<=subject; i++)
    {
        cout<<"subject="<<i+1<<*(marks+1);
    }
    cout<<"student average=>"<<avg<<endl;
}
int main()
{
    student s;
    s.input();
    s.calculate();
    s.display();
    return 0;
}

