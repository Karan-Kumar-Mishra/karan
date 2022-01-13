#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
class student
{
    char name[20];
    float marks;
public:
    int roll;
    void setdata()
    {
        cout<<"enter your name=>"<<endl;
        gets(name);
        cout<<"enter your roll number=>"<<endl;
        cin>>roll;
        cout<<"enter your marks=>"<<endl;
        cin>>marks;
    }
    void showdata()
    {
        cout<<"your name is =>"<<name<<endl;
        cout<<"your roll number is =>"<<roll<<endl;
        cout<<"your marks=>"<<marks<<endl;
    }
};
int main()
{
    student s[2];
    for(int i=0; i<=2; i++)
    {
        s[i].setdata();
        cout<<endl;
    }
    cout<<endl;
    int n;
    cout<<"enter to be search=>"<<endl;
    cin>>n;
    for(int i=0; i<=2; i++)
    {
        if(s[i].roll==n)
        {
            cout<<"found"<<endl;
            s[i].showdata();
            break;
        }
    }
    return 0;
}

