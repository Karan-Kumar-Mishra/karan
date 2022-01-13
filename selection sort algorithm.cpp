#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int min(int a[],int k,int n)
{
    int j,loc,min;
    min=a[k];
    loc=k;
    for(j=k+1; j<=n-1; j++)
    {
        if(min>a[j])
        {
            min=a[j];
            loc=j;
        }
     
    }
    return loc;
       
}
    int main()
    {
        int a[]= { 33,44,11,66,88,99,33,15,1,2};
        int loc,k,temp;
        for(k=0; k<=8; k++)
        {
            loc=min(a,k,10);
            temp=a[k];
            a[k]=a[loc];
            a[loc]=temp;
        }
        for(k=0; k<=9; k++)
            cout<<a[k]<<endl;
        return 0;
    }