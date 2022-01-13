#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
//---modified bubble sort algorithm--//
int main()
{
    int a[5];
    int temp,f;
    for(int i=0; i<=4; i++)
    {
        cout<<"enter the element=>"<<i+1<<endl;
        cin>>a[i];
    }
    for(int j=1; j<=4; j++)
    {
        f=0;
        for(int i=0; i<=4-j; i++)
        {
            if(a[i]>a[i+1])
            {
                f=1;
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        if(f==0) {
            cout<<"round=>"<<j<<endl;
            break;
        }
    }
    cout<<"after sorting=>"<<endl;
    for(int i=0; i<=4; i++)
        cout<<a[i]<<endl;
    return 0;
}

