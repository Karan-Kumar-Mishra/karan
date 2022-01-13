#include<iostream>
using namespace std;
//parameterized constructor
class point
{
 int a,b;
 public:
point(int x,int y)
{
 a=x;
 b=y;
}
void showdata()
{
 cout<<"the value of x point="<<a<<endl;
 cout<<"the value of y point="<<b<<endl;
}
};
int main()
{
 point p1(5,8);
 p1.showdata();
 return 0;
}