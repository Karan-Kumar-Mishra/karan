#include<iostream>
using namespace std;
class product
{
 private:
 int m,n;
 public:
 void setdata(int x,int y)
{ 
 m=x;
 n=y;
}
 int getm()
{ 
  return (m);
}
 int getn()
{ 
  return (n);
}

};
class item
{
 private:
 int a,b;
 public:
  void showdata()
{
cout<<"a="<<a<<endl;
 cout<<"b="<<b<<endl;
}
item()
{ }
item(product p) 
{
 a=p.getm();
 b=p.getn();
}
};
int main()
{
 item i1;
 product p1;
 p1.setdata(12,89);
 i1=p1;
 i1.showdata();
 return 0;
}
 

 