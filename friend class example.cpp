#include<iostream>
#include<time.h>
#include<string.h>
using namespace std;
/*program to compare the names the of student
and teacher for eqality and display the massage
accordingly with the help of friend class only */
class teacher;
class student
{
    friend teacher;
private:
    char name[20];
    int roll;
    float marks;
public:
    void input()
    {
        cout<<"enter your name =>"<<endl;
        gets(name);
        cout<<"enter your rollnumber=>"<<endl;
        cin>>roll;
        cout<<"enter your marks=>"<<endl;
        cin>>marks;
    }
};
class teacher
{
private:
    char tname[20];
    int id;
    float salary;
public:
    void inputinformation()
    {
        cout<<"enter your name=>"<<endl;
        cin>>tname;
        cout<<"enter id=>"<<endl;
        cin>>id;
        cout<<"enter your salary=>"<<endl;
        cin>>salary;
    }
    void compare(student s);
};
void teacher::compare(student s)
{
    if(strcmp(s.name,tname)==0)
    {
        cout<<"the name of teacher and student is eqal"<<endl;
    }
    else
    {
        cout<<"the name of student and teacher is not equal="<<endl;
    }
}

int main()
{
 student s;
 teacher t;
 s.input();
 t.inputinformation();
 t.compare(s);
return 0;
}