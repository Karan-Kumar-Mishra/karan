#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class complex
{
  private:
 int a,b,c;
 public:
 void setdata(int x,int y)
 {
   a=x;
   b=y;
 }
 void showdata()
 {
 cout<<"a="<<a<<endl;
 cout<<"b="<<b<<endl;
 }
 operator int ()
{
 return (a);
}
};
 int main()
{
  complex c1;
  c1.setdata(23,78);
  c1.showdata();
  int x;
  x=c1;
  cout<<"x="<<x<<endl;
  return 0;
  }

 
