#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int *p=new int (456);
cout<<"the value of at address p is="<<*p<<endl;
int *arr=new int [3];
//dynmic array;
arr[0]=10;
arr[1]=20;
arr[2]=30;
cout<<arr[0]<<endl;
cout<<arr[1]<<endl;
cout<<arr[2]<<endl;
return 0;
}