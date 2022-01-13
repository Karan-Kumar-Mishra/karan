#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
int sum(int n)
{
if(n==1)
return 1;
return(n*n+sum(n-1));
}
int main()
{
int n;
cout<<"enter any number=>"<<endl;
cin>>n;
cout<<"answer is="<<sum(n)<<endl;

return 0;
}