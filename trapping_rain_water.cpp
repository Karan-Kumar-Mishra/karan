#include<bits/stdc++.h>
using namespace std;
int rain_water(vector<int> a)
{
  stack<int> st;
  int n=a.size();
  for(int i=0;i<n;i++)
  {
    while(!st.empty() and a[st.top()])
    {
               
    }
    
  }
}
int main()
{
    vector<int> a={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<rain_water(a)<<endl;
    return 0;
}