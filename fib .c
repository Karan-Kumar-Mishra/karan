#include<iostream>
using namespace std;
int fib(int a)
{
if (a<=2)
{
return 1;
}
return fib(a-2)+fib(a-1);
}
int main()
{
 int a;
 cout<<"enter any number"<<endl;
 cin>>a;
 cout<<"answer is="<<(fib(a))<<endl;
 return 0;
} 