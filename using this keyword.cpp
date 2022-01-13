#include<iostream>
#include<string.h>
using namespace std;
class box
{
int l,b,h;
public:
void setdata(int l,int b,int h)
{
this->l=l;
this->b=b;
this->h=h;
}
void showdata()
{
cout<<"l="<<l<<endl<<"b="<<b<<endl<<"h="<<h<<endl;
cout<<this->l<<endl;
cout<<this->b<<endl;
cout<<this->h<<endl;
}

};
int main()
{
  box b1;
  b1.setdata(12,78,56);
  b1.showdata();  

    return 0;
}
    