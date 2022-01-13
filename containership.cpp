#include<iostream>
#include<string.h>
using namespace std;
//containership
class first
{
int a;
public:
int get_a()
{
cout<<"enter value for a=>"<<endl;
cin>>a;
return a;
}
};
class second
{
int b;
public:
int get_b()
{
cout<<"enter value for b=>"<<endl;
cin>>b;
return b;
}
};
class jack
{
int n;
first f;
second s;
public:
void add()
{
n=f.get_a()+s.get_b();
}
 void showdata()
{
cout<<"addtion is =>"<<n<<endl;
}
};
int main()
{
jack m;
m.add();
m.showdata();
return 0;
}