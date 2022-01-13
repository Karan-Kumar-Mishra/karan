#include<iostream>
#include<stdio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int fib(int x)
{
    if(x==1||x==2)
        return (1);
    else
    {
        int a=x*fib(x-1);
        return a;
    }
    }
    int main()
    {
        int k;
        cout<<"enter any number =>"<<endl;
        cin>>k;
        cout<<"fib is=>"<<fib(k)<<endl;
        return 0;
    }

