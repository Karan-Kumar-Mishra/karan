#include<iostream>
using namespace std;
class box
{
private:
int l,b,h;
public:
 void setdimension(int x,int y,int z)
{
  l=x;
  b=y;
  h=z;
}
void showdimension()
{
  cout<<"l="<<l<<endl;
  cout<<"b="<<b<<endl;
  cout<<"h="<<h<<endl;
}
};
int main()
{
 box *p,smal;
 p=&smal;
 p->setdimension(12,45,78);
 p->showdimension();
 return 0;
 }
