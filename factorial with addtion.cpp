#include<iostream>
#include<conio.h>
using namespace std;
int sub(int);
int main()
{ 
int fact=1,n,k;
cout<<"enter any number"<<endl;
cin>>n;
for(int i=1;i<=n;++i)
{
  fact=fact*i;
k=sub(n);
}
cout<<"factorial is ="<<fact<<endl;
cout<<"addtion is="<<k<<endl;
return 0;
}
int sub(int x)
{
 int add=0;
 for(int k=1;k<=x;k++)
 {
    add=add+k;
  }
return (add);
} 

    