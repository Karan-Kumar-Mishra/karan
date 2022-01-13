#include<iostream>
#include<string.h>
using namespace std;
class abc
{
int a,b;
public:
 abc(int a1,int b1)
{
a=a1;
b=b1;
}
void disp()
{
cout<<"the value of a is="<<a<<endl;
cout<<"the value of b is="<<b<<endl;
}
};

class xyz:public abc
{
int x,y;
public:
xyz(int m,int n,int x1,int y1):abc(m,n)
{
x=x1;
y=y1;
}
void display()
{
cout<<"the value of x is ="<<x<<endl;
cout<<"the value of y is="<<y<<endl;
}
};
int main()
{
xyz ob(34,67,34,78);
ob.disp();
ob.display();
return 0;
}

