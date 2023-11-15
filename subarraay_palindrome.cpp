#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace  std;
int solve(string *arr,int s)
{
  int l=0;
  int m=3;
  string sum;
  for (int j =0; j<s; j++)
  {
     for(int i=l;i<m && i!=s;i++)
     {
       cout<<arr[i]<<" ";
       sum=sum+arr[i];
     }cout<<endl; 
     l=l+1;
     m=m+1;
     cout<<"sum=> "<<sum<<endl;
     string s2=sum;
     reverse(sum.begin(),sum.end());
     if(s2==sum)
     {
      cout<<"found => "<<sum<<endl;
     }
     sum="";  
  }
}
int main()
{
    string arr[]={"s","f","g","f","i","e"};

    solve(arr,4);
    return 0;
}

