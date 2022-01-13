#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
void insertion(int [],int );
int main()
{

    int a[]= {35,56,21,2,89,94,56,99};
    insertion(a,8);
    for(int i=0; i<=7; i++)
        cout<<a[i]<<endl;
    return 0;
}
void insertion(int a[],int n)
{
    int j,temp;
    for(int i=1; i<n; i++)
    {
        temp=a[i];
        for(j=i-1; j>=0 && temp<a[j];j--)
            a[j+1]=a[j];
            a[j+1]=temp;
        

    }
}