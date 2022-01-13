#include<iostream>
#include<conio.h>
using namespace std;
class A
{
private:
 int a;
public:
 A(int k)
{
  a=k;
}
};
class B:public A
{
 int b;
public:
 B(int x,int y):A(x)
{
  b=y;
}
   void showdata()
{
 
 cout<<"b="<<b<<endl;
}
};
int main()
{
 B obj(2,3);
 obj.showdata();
 return 0;
}






  


 