#include<iostream>
using namespace std;
class number
{
 int a;
  public:
number()
{
  a=0;
}
number(int x)
{
  a=x;
}
number(number &x)//copy constructor 
{
 a=x.a;
cout<<a<<endl;
}
void showdata()
{
   cout<<"the value of a="<<endl;
}
};
int main()
{
  number x(45),y,z(78);
  x.showdata();
  y.showdata();
  z.showdata();
  number z1(x);
  z1.showdata();
  return 0;
}