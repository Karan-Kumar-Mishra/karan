#include<iostream>
#include<stdio.h>
using namespace std;
/*

 Question :

 For given array and an integer k, check if any subarray of size k
 exists in the array such that elements in the subarray form a 
 number divisible by 3

*/
int solve(int *arr,int s)
{
  int l=0;
  int m=3;
  int sum=0;
  for (int j =0; j<s; j++)
  {
     for(int i=l;i<m && i!=s;i++)
     {
       cout<<arr[i]<<" ";
       int o=arr[i];
       while (o>0)
       {
        sum=sum+o%10;
        o=o/10;
       }
     }cout<<endl; 
     l=l+1;
     m=m+1;
     if(sum%3==0)
     {
      cout<<"found => "<<sum<<endl;
     }
     sum=0;  
  }
}
int main()
{
    int arr[]={84,23,45,12,56,82};
    solve(arr,6);
    return 0;
}