#include<iostream>
using namespace std;
 // a program of find local and golobal variable
 int c=45;  
int main()
{
 int c=67;
 cout<<"the vlue of local vaiable="<<c<<endl;
 cout<<"the value of global vaiable"<<::c; 
 
 return 0;
}
