#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int i,n,k;
    cout<<"enter how many number you want to enter=>"<<endl;
    cin>>n;
    int a[n];
    for( i=0; i<n; i++)
    {
        cout<<"enter the element=>"<<i+1;
        cin>>a[i];
    }
    cout<<"enter which element index want to insert=>"<<endl;
    cin>>k;
  int b;
    for(i=0; i<n; i++)
    {
        if(k==a[i])
        {
            cout<<"found=>"<<a[i]<<endl;
            cout<<"insert the current value=>"<<endl;
            cin>>b;
            a[i]=b;
            cout<<"value of after insert=>"<<a[i]<<endl;
            break;
        }
    }
    if(i==n)
        cout<<"not found"<<endl;
    return 0;
}


