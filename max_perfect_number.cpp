#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
bool find_perfect(int num)
{
  int sum=0;
       for (int i = 1; i <= num; i++) {
        if (num % i == 0 && num!=i) {
        //    cout<<i<<" ";
                sum=sum+i;
        }
    } 
    if(sum==num)
    {
      return true;
    }
    else
    {
      return false;
    }
}
int max_pefect(vector<int> v1)
{
  int c=0;
  for (int  i = 0; i < v1.size(); i++)
  {
    if(find_perfect(v1[i]))
    {
      c++;
    }
  }
  return c;
}
int solve(vector<int> &arr,int s)
{
  int l=0;
  int m=3; 
  int count=0;
  int n=arr.size();
  for (int j =0; j<n; j++)
  {
     vector<int> temp;
     for(int i=l;i<m && i!=n;i++)
     {
       //cout<<arr[i]<<" ";
       temp.push_back(arr[i]);
          
     }cout<<endl; 
      l=l+1;
      m=m+1;
      for(auto i:temp)
      //cout<<i<<" ";
     // cout<<" => "<<max_pefect(temp);
      temp.clear();

  }
  return count;
}
int main()
{
 /*vector<int> v1={84,23,45,12,56,82};
 int k=3;
 solve(v1,k);
 */
 //cout<<find_perfect(12);
 vector<int> v1={12,56,82};
 cout<<max_pefect(v1);
}