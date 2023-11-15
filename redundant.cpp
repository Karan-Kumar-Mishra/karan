#include<iostream>
#include<stack>
using namespace std;
bool is_redundant()
{ 
  string str;
  cin>>str;
  stack<char> st;
  bool ans=false;
  for(int i=0;i<str.size();i++)
  {
    if(str[i]=='(' or str[i]=='+' or str[i]=='-' or str[i]=='*' or str[i]=='/')
    {
      st.push(str[i]);
    }
    else if(str[i]==')')
    {
        if (st.top()=='(')
        {
            ans=true;
        }
        
     while (st.top()=='+' or st.top()=='-' or st.top()=='*' or st.top()=='/' )
     {
        st.pop();
     }
     
    }
  }
  cout<<ans<<endl;
}
int main()
{
    is_redundant();
    return 0;
}