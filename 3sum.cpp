#include<iostream>
#include<stdio.h>
using namespace std;
int sum3(int *arr,int t,int len)
{
    int flag=0;
    for (int i = 0; i < len; i++)
    {
         for(int j=i+1;j<len;j++)
        {  
            for(int k=j+1;k<len;k++)
            {
                if(arr[i]+arr[j]+arr[k]==t)
                {
                    flag= 1;
                }
            }
        }
   } 
return flag;
       
}
int main()
{
    int arr[]={12,3,7,1,6,9};
    cout<<sum3(arr,24,6)<<endl;
    return 0;
}