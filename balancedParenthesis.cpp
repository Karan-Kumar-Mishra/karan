#include<iostream>
#include<stdio.h>
#include<stack>
using namespace std;
int is_valid(string str)
{
    stack<char> st;
  for(int i=0;i<str.length();i++)
  {
    if (str[i]=='[' or str[i]=='{' or str[i]=='(')
    {
        st.push(str[i]);
    }  
  } 
  for(int i=0;i<str.length();i++)
  {
   if (str[i]==']' or str[i]=='}' or str[i]==')')
    {
        st.pop();
    }
  }
   if(st.empty())
   {
    return 1;
   }
   else{
    return 0;
   }

}
int main()
{
    string str="(a+b)+{k-1}*[6-8]"; 
    cout<<is_valid(str);
    return 0;
}