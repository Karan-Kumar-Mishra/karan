#include"karan.h"
using namespace std;
 string reformat(string s) {
         string digit="";
         string later="";
         int cd=0;
         int cl=0;
         for (int i = 0; i <=s.size(); i++)
         {
          if(s[i]>='0' && s[i]<='9')
          {
            digit.push_back(s[i]);
            cd=1;
          }
          else if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z'))
          {
            later.push_back(s[i]);
            cl=1;
          }
         }
         if((cd==1 && cl==0) || (cd==0 && cl==1) || (later.size()==1 && digit.size()==1))
         {
          return "";
         }
         

         vector<char> ans;
         int l=0,k=0;

         if(digit.size()%2==0)
         {

         
         for (int  i = 0; i <=s.size(); i++)
         {
         if(i%2==0 && k!=later.size())
         {
          ans.push_back(later[k]);
          k++;
         }
         if(i%2!=0 && l!=digit.size())
         {
          ans.push_back(digit[l]);
          l++;
         }  
         }
         }
         else
         {
          
         for (int  i = 0; i <=s.size(); i++)
         {
         if(i%2==0 && k!=digit.size())
         {
          ans.push_back(digit[k]);
          k++;
         }
         if(i%2!=0 && l!=later.size())
         {
          ans.push_back(later[l]);
          l++;
         }  
         }
         }

         s.clear();
         for(auto k:ans)
         s=s+k;
         return s;
         
}
int main()
{
 string s = "j";
 cout<<reformat(s);
 return 0;
}

