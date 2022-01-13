#include<iostream>
using namespace std;
int main()
{
 int n;
 char reply='y';
 do
{
 cout<<"enter any number"<<endl;
 cin>>n;
 if(n>100)
{
 cout<<"the numbmber is greter then 100 enter anthor"<<endl;
 continue;
 }
 cout<<"the square of number is ="<<n*n<<endl;
 cout<<"do you want enter anthor number?"<<endl;
 cin>>reply;
  }
 while (reply!='n');

 return 0;
}

    