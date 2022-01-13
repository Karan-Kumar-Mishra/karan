#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;
//dynmic memoory allocation and in class
class student
{
private:
char name[20];
int roll;
float marks;
public:
void setdata()
{
 cout<<"enter your name="<<endl;
 gets(name);
 cout<<"enter your roll number="<<endl;
 cin>>roll;
 cout<<"enter your marks="<<endl;
 cin>>marks;
}
void showdata()
{
cout<<"your name is="<<name<<endl;
cout<<"your roll number is="<<roll<<endl;
cout<<"your marks is="<<marks<<endl;
}
};
int main()
{
student *p;
p=new student();
p->setdata();
p->showdata();
delete p;
return 0;
}


 