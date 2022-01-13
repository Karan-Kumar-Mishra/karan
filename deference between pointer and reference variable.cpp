#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a=12,b=13;
int &v1=a,&v2=v1,&v3=v2;
cout<<a<<endl;
cout<<v1<<endl;
cout<<v2<<endl;
cout<<v3<<endl;
int *p1,**p2,***p3;
p1=&b;
p2=&p1;
p3=&p2;
cout<<b<<endl;
cout<<p1<<endl;
cout<<p2<<endl;
cout<<p3<<endl;
return 0;
}