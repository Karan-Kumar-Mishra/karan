#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
//   " == "operator overloading
class zack
{
    int a;
    int b;
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
        cout<<"the value of a is=>"<<a<<endl;
        cout<<"the value of b is=>"<<b<<endl;
    }
   friend bool  operator==(zack a1,zack b1);
   
};
bool operator==(zack a1,zack b1)
{ 
  zack z1; 
  z1.a=a1.a==b1.a;
  z1.b=a1.b==b1.b;
  
}

int main()
{
zack a,b,c;
a.setdata();
b.setdata();

if(a==b)
{
cout<<" operator is overloaded"<<endl;
}
else
{
cout<<"operator is not overloaded"<<endl;
}
 
    return 0;
}


