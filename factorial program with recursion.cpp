#include<iostream>
using namespace std;
int factorial(int a)
{
 if(a<=1)
{
 return 1;
}
 return a*factorial(a-1);
}
int main()
{
int j;
cout<<"enter any number"<<endl;
cin>>j;
cout<<"the factorial is="<<factorial(j)<<endl;
 return 0;
}