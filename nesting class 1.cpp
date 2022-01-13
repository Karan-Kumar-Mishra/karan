#include<iostream>
#include<string.h>
using namespace std;
/* nesting class program*/


class karan1 
{
 private:
 int a;
 int b;
 public:
     class karan2
    {
      private:
      int c;
      public:
     void setdata(int x)
    {
     c=x;
    }
     void showdata()
    {
     cout<<"the vlue of karan2'c="<<c<<endl;
    } 
    }k1;
    void setinfo(int y){    
    k1.setdata(y);
    k1.showdata();
    }
    void setvalue1(int x1,int x2)
    { a=x1; b=x2;}
    void showvalue()
    {
    cout<<"value of a karan'1 is="<<a<<endl;
    cout<<"vlue of b karan'kara'2 is="<<b<<endl;
    }
 };
 int main()
{
 karan1 f;
 f.setvalue1(78,56);
 f.showvalue();
 
 return 0;
}
   
 
    
    
    