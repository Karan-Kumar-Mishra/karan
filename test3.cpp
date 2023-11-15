#include "karan.h"

using namespace std;
int get_int(char ch)
{
 char chr='a';
 for (int i = 1; i <=26; i++)
 {
    if(chr==ch)
    {
        return i;
    }
    chr++;    
 }
        
}
int getLucky(string s, int k) {
    string digit;
    int sum=0;
    for (int i = 0; i < s.size(); i++)
    {
        digit =digit+to_string(get_int(s[i]));
    }
    for (int  i = 0; i < s.size(); i++)
    {
      int t=stoi(to_string( digit[i]));
      
      sum=sum+t;
    }
    
  
    
    cout<<"digit str=> "<< digit<<endl;
    cout<<"sum => "<<endl;
    return sum;
        
}
int main()
{
    string  s = "iiii";
    int k = 1;
    getLucky(s,k);

  //pending 1945. Sum of Digits of String After Convert

 
    return 0;
}
