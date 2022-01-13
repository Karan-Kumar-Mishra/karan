#include<iostream>
#include<conio.h>
using namespace std;
int add(int,int);
int sub(int,int);
int divi(int,int);
int multi(int,int);
int main()
{
int a,b,c,d,e,f;
cout<<"enter any two number"<<endl;
cin>>a>>b;
c=add(a,b);
d=sub(a,b);
e=divi(a,b);
f=multi(a,b);
cout<<"addtiotn is ="<<c<<endl;
cout<<"subtruction is="<<d<<endl;
cout<<"division is ="<<e<<endl;
cout<<"multiplction is="<<f<<endl;
return 0;
}
int add(int x,int y)
{
return(x+y);
}
int sub(int x1,int y1)
{
return (x1-y1);
}
int divi(int x2,int y2)
{
return (x2%y2);
}
int multi(int x3,int y3)
{
return (x3*y3);
}

 

    