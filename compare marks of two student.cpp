#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;
//program to find and display the greater of two students on the bassis of their average marks
class student
{
    char name[30];
    int roll;
    float marks;
public:
    void setdata()
    {
        cout<<"enter your name="<<endl;
        cin>>name;
        cout<<"enter your roll number="<<endl;
        cin>>roll;
        cout<<"enter your marks="<<endl;
        cin>>marks;
    }
    void showdata()
    {
        cout<<"your nmae is="<<name<<endl;
        cout<<"your roll number is="<<roll<<endl;
        cout<<"your mark is ="<<marks<<endl;
    }
    float avg()
    {
        return marks;
    }
    void comp(student s1,student s2)
    {
        if(s1.avg()>s2.avg())
        {
            s1.showdata();
        }
        else
            s2.showdata();

    }
};
int main()
{
    student s1,s2,s3;
    s1.setdata();
    s2.setdata();
    s3.comp(s1,s2);
    return 0;
}





