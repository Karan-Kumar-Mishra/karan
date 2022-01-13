#include<iostream>
using namespace std;
class dummy
{
private:
 int a,b;
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
};
int main()
{
 dummy d1;
 d1.setdata(4,8);
 dummy d2=d1;
 d2.showdata();
}
