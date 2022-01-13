#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class student
{
int a,b;
public:
  void show() 
{
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;

}
student() { }
student(int x)
{ a=x;b=x+1;
}
};

int main()
{

    student a;
    int j=5;
    a=j;
    a.show();
    return 0;

}