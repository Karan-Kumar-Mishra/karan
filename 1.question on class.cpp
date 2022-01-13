#include<iostream>
#include<string.h>
using namespace std;
class empolyee
{
 
    char name[30];
    int id;
    int add;
    float salary;
public:

    void setdata()
    {
     static int count=1;
     
     cout<<"empolyee number is=>"<<count<<endl;
        count++;
        cout<<"enter your name =>"<<endl;
        gets(name);
        cout<<"enter your id=>"<<endl;
        cin>>id;
        cout<<"enter your address=>"<<endl;
        cin>>add;
        cout<<"enter your salary=>"<<endl;
        cin>>salary;
    }
    void showdata()
    {
        cout<<"your name is=>"<<name<<endl;
        cout<<"your id is=>"<<id<<endl;
        cout<<"your address is=>"<<add<<endl;
        cout<<"your salary is=>"<<(int)salary<<endl;
    }
};
int main()
{
  empolyee e[10];
 for(int i=1;i<=10;i++)
{
  e[i].setdata();
  e[i].showdata();
}
  return 0;
}