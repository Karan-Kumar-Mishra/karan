#include<iostream>
using namespace std;
class B;
class A
{
 private:
 int a;
 public:
 void setdata(int x)
{ a=x; }
 friend void fun(A,B);
};
class B
{
 private:
 int b;
 public:
void setdata(int y)
{ b=y; }
friend void fun(A,B);
};
void fun(A o1,B o2)
{
  cout<<"sum is="<<o1.a+o2.b;
 }
int main()
{
 A obj1;
 B obj2;
 obj1.setdata(3);
 obj2.setdata(7);
 fun(obj1,obj2);
 return 0;
}
 

