#include<iostream>
using namespace std;
int main()
{
 int n,fact=0;
cout<<"enter any number"<<endl;
cin>>n;
for(int i=1;i<=n;i++)
{
  fact+=i;
}
 cout<<"factorial is ="<<fact<<endl;
 return 0;
}