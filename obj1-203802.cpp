#include<iostream>
#include<conio.h>
using namespace std;
class box
{
private:
int l,b,h;
public:
    void setdimension(int x,int y,int z)
    { l=x; b=y; h=z;}
    void showdimension()
    {
 cout<<"l="<<l<<endl;
 cout<<"b="<<b<<endl;
 cout<<"h="<<h<<endl;
}
};
int main()
{
  box s1;
  s1.setdimension(12,56,90);
  s1.showdimension();
 return 0;
}
  
     
    