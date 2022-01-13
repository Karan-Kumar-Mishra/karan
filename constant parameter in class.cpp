#include<iostream>
#include<string.h>
using namespace std;
class student
{
private:
    char name[30];
    int roll;
    float marks;
public:
    void setdata()
    {
        cout<<"enter your name=>"<<endl;
        gets(name);
        cout<<"enter your roll number=>"<<endl;
        cin>>roll;
        cout<<"enter your mark=>"<<endl;
        cin>>marks;
    }
    void updata(const float x)
    {
        marks= marks+x;
    }

    void showdata()
    {
        cout<<"your name is ="<<name<<endl;
        cout<<"your roll number ="<<roll<<endl;
        cout<<"your marks is="<<marks<<endl;
    }
};


int main()
{
    int k;

    student a,b,s;
    s.setdata();
    s.showdata();
    cout<<"enter any number"<<endl;
    cin>>k;
    b.updata(k);
    s.showdata();
    return 0;
}

