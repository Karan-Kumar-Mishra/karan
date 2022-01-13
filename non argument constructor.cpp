#include<iostream>
using namespace std;
 //simple constructor c++ program
 class jack
{
 int a;
 public:
 void showdata()
{
 cout<<"the value of a="<<a<<endl;
 
}
jack();
};
 jack::jack()
{
 cout<<"this is constructor function "<<endl;
 a=12; 
}

 int main()
{
 jack j1;
 j1.showdata();
 return 0;
}