#include<iostream>
#include<stdio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int gcd(int a,int b)
{
    if(a==b)
        return (a);
    if(a%b==0)
        return b;
    if(b%a==0)
        return a;
    if(a>b)
        return gcd(a%b,b);
    else
        return gcd(b%a,a);


}
int main()
{
    int a,b;
    cout<<"enter any first number=>"<<endl;
    cin>>a;
    cout<<"enter any second number=>"<<endl;
    cin>>b;
    cout<<"gcd of given number is=>"<<gcd(a,b)<<endl;
    return 0;
}
