#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class teacher;
class student
{
private:
    char name[10];
    int roll;
    float marks;
public:
    void setdata()
    {
        cout<<"enter your name "<<endl;
        cin>>name;
        cout<<"enter your roll number="<<endl;
        cin>>roll;
        cout<<"enter your marks ="<<endl;
        cin>>marks;
    }
    void showdata()
    {
        cout<<"your name is ="<<name<<endl;
        cout<<"your roll number is ="<<roll<<endl;
        cout<<"your marks is="<<marks<<endl;
    }
    friend void compare(student s,teacher t);

};
class teacher
{
private:
    char name[10];
    int id;
    float salary;
public:
    void setinformation()
    {
        cout<<"enter your name="<<endl;
        cin>>name;
        cout<<"enter your id ="<<endl;
        cin>>id;
        cout<<"enter your salary="<<endl;
        cin>>salary;
    }
    void showinformation()
    {
        cout<<"your name is ="<<name<<endl;
        cout<<"your id is ="<<id<<endl;
        cout<<"your salary is ="<<salary<<endl;
    }
    friend void compare(student s,teacher t);
};
void compare(student s1,teacher t1)
{
    if(strcmp(s1.name,t1.name)==0)
    {
        cout<<"the name of student and teacher is equal="<<endl;
    }
    else
    {
        cout<<"the name of student and teacher is not equl"<<endl;
    }
}

int main()
{
    student s1;
    teacher t1;
    s1.setdata();
    t1.setinformation();
    compare(s1,t1);
    return 0;
}




