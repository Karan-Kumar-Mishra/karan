#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
 int a,b;
 public:
 void setdata(int x,int y)
{
 a=x;
 b=y;
}
friend complex sum(complex ,complex );
 void shownumber()
{
 cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
}
};
complex sum(complex o1,complex o2)
{
 complex o3;
 o3.setdata((o1.a+o2.a),(o1.b+o2.b));
 return o3;
}
int main()
{
 complex c1,c2, sum;
 c1.setdata(1,4);
 c2.setdata(5,9);
 c1.shownumber();
 return 0;
}
    
   