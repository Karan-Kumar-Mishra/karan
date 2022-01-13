#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
class jack
{
 int a,b;
 public: 
 void setdata()
 {
 cout<<"enter the value of a=>"<<endl;
 cin>>a;
 cout<<"enter the value of b=>"<<endl;
 cin>>b;
}
void showdata()
{
 cout<<"the  value of a is=>"<<a<<endl;
 cout<<"the value of b is=>"<<b<<endl;
}
 friend void operator<<(ostream&,jack);
};
void operator<<(ostream &out,jack j2)
{ 
 out<<j2.a;
 cout<<" ";
 out<<j2.b; 
}
int main()
{
 jack j1;
 j1.setdata();
 cout<<j1;
 return 0; 
}
 