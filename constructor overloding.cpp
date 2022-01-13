#include<iostream>
using namespace std;
//parameterized constructor
class complex
{
 int a,b;
 public:
complex()
{
 a=0;
 b=0;
}
complex(int x)
{
 a=x;
 b=0;
}
 complex(int x,int y)
{ a=x;
  b=y;
}

 void showdata()
{
 cout<<"the value of a="<<a<<endl;
 cout<<"the value of b="<<b<<endl;
}
};
int main()
{
 complex c1(6,9);
 c1.showdata();
 complex c2(5);
 c2.showdata();
 complex c3;
 c3.showdata();
 
return 0;
}