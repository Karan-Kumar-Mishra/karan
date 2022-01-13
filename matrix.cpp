#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter the value if row=>"<<endl;
    cin>>x;
    cout<<"enter the value of coluam=>"<<endl;
    cin>>y;

    int a[x][y];
    cout<<"enter the value of matrix first=>"<<endl;
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {

            cin>>a[i][j];
            cout<<"index=>"<<i<<j<<endl;
        }
    }
    cout<<"enter the value of second matrix=>"<<endl;

    int b[2][2];
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            cin>>b[i][j];
            cout<<"index=>"<<i<<j<<endl;
            
        }
    }
    cout<<"addtion is=>"<<endl;
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            cout<<a[i][j]+b[i][j];
            cout<<"index=>"<<i<<j<<endl;
            cout<<"\t";
        }
    }

    return 0;
}

 
