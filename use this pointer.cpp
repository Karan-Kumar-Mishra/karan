#include<iostream>
#include<string.h>
using namespace std;
// --this pointer
class student
{
  int a=56;
 public:
 
  void setd()
{
 cout<<"this is set 1 function"<<endl;
}
 void set()
{
 cout<<(this);
 cout<<"this is set 2 function"<<endl;
}
     
};
int main()
{
 student s;
 s.set();

    return 0;
}

