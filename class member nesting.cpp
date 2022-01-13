#include<iostream>
#include<string.h>
using namespace std;
class binary
{
 string s;
 public:
 void read (void);
 void cheek(void);
 void one(void);
 void display(void);
};
void binary::read(void)
{
 cout<<"enter any number ="<<endl;
 cin>>s;
}
void binary::cheek(void)
{
 for(int i=0;i<s.length();i++)
{
 if(s.at(i)!='0'&& s.at(i)!='1')
  {
    cout<<"this is not a binary number"<<endl;
     exit(0);
    }
 }
}
void binary::one(void)
{
 cheek(); //this is main thing in thi sprogram and tis is called  class member nesting function
 for(int i=0;i<s.length();i++)
  {
    if(s.at(i)=='0')
      
        s.at(i)='1';
     else
        s.at(i)='0';
        }
 }
 void binary::display(void)
{
 cout<<"finaly this is your binary number"<<endl;
  for(int i=0;i<s.length();i++)
{
  cout<<s.at(i);
}
 cout<<endl;
}
 int main()
{
 binary b1;
 b1.read();
// b1.cheek();
 b1.one();
 b1.display(); 
 return 0;
}
