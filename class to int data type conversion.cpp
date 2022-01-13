#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
 private:
int a,b;
 public:
 complex() {}
complex(int k)
{
 a=k;
 b=0;
}
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
};
int main()
{
 complex c1;
 int x=5;
 c1=x;
 c1.showdata();
 return 0;
}   
    

