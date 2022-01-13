#include<iostream>
using namespace std;
//a simple program of defalt value
class simple
{
 int data1;
int data2;
public:
  simple(int a,int b=9)
{
 data1=a;
 data2=b;
}
 void showdata();
};
void simple::showdata()
{
 cout<<"the value of data1 is="<<data1<<endl;
 cout<<"the value of data2 is="<<data2<<endl;
}
int main()
{
 simple s(4);
 s.showdata();
 return 0;
}