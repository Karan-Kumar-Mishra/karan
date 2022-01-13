#include<iostream>
using namespace std;
int main()
{
 char ch;
 cout<<"enter any symbol"<<endl;
 cin>>ch;
 if((ch>='a'&&ch<='z')||(ch>='A'&&ch <='Z'))
{
   cout<<" character"<<endl;
}
 else
 cout<<"not character"<<endl;
 return 0;
}