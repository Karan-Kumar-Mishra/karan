#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
//nameless object
class student
{
private:
    char name[20];
    int roll;
    float marks;
public:
    
    void showdata();
    student(char namep[20],int rollp,float marksp);
};
student::student(char namep[20],int rollp,float marksp)
{
    strcpy(name,namep);
    roll=rollp;
    marks=marksp;
    showdata();
}
void student::showdata()
{   cout<<"your name is="<<name<<endl;
    cout<<"your roll number is="<<roll<<endl;
    cout<<"your marks is="<<marks<<endl;
}
int main()
{
    student("zack",78,98.7f);
    return 0;
}

