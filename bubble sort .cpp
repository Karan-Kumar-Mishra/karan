#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
int a[5],temp;
cout<<"enter the number"<<endl;
for(int i=0;i<=4;i++)
cin>>a[i];
for(int j=1;j<=5-1;j++)
 for(int i=0;i<=5-1-j;i++)
   if(a[i]>a[i+1])
{
 temp=a[i];
 a[i]=a[i+1];
a[i+1]=temp;
}
for(int i=0;i<=4;i++)
cout<<a[i]<<endl;
return 0;
}       