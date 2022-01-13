#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
  //constant object
class student 
{
private:
 char name[20];
 int roll;
 float marks;
public:
  student(char n[20],int r,float m);
  void showdata()const;
 
};
  student::student(char n[20],int r,float m)
{
 strcpy(name,n);
 roll=r;
 marks=m;
}
 void student::showdata()const
{
 cout<<"your name is =>"<<name<<endl;       
 cout<<"your roll number is=>"<<roll<<endl;
 cout<<"your marks is =>"<<marks<<endl; 
}
int main()
{
 const student s("zack",45,90.78);
 s.showdata();
 return 0;
}

    