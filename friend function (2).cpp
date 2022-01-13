#include<iostream>
using namespace std;
class y;
class x
{
 int data;
 public:
 void setvalue(int j)
{
  data=j;
}
 friend void add(x,y);
};
 class y
{
 int num;
 public:
 void setvalue(int k)
{
 num=k;
}
 friend void add(x,y);
};
 void add(x o1,y o2)
{
  cout<<"the addtion is ="<<o1.data+o2.num<<endl<<endl;
}
int main()
{
  x a1;
  a1.setvalue(3);
  y b1;
  b1.setvalue(5);
  add (a1,b1);
  return 0;
}