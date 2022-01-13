#include<iostream>
#include<string.h>
using namespace std;
class simple
{
  int a;
 public:
 simple()  {  }
 simple(int x)  {a=x;}
 int display()  { return a;}
 simple greater(simple &x)
{
 if(x.a>a)
{
 return x;
}
else
return *this;
}
};
int main()
{
simple ob1(3),ob2(2),ob3;
ob3=ob1.greater(ob2);
cout<<"greater no is="<<ob3.display()<<endl;   
return 0;
}



