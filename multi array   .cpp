#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{

    int a[2][2][2][2];
    for(int i=0; i<=2; i++)
    {
        for(int j=0; j<=2; j++)
        {
            for(int k=0; k<=2; k++)
            {
                for(int l=0; l<=2; l++)
                {
                    cout<<a[i][j][k][l]<<"\t ";
                }
            }
        }
    }

    return 0;
}
