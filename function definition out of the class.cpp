#include<iostream>
using namespace std;
class jack
{
private:
 int a,b;
public:
 void showdata();
 void setdata(int x,int y)
{
 a=x;b=y;
}
 };
void jack::showdata()
{
 cout<<"the value of a is="<<a<<endl;
 cout<<"the value of b is="<<b<<endl;
}
int main()
{
 jack j1;
 j1.setdata(34,78);
 j1.showdata();
return 0;
}

    