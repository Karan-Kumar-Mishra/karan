#include <iostream>
#include<conio.h>
using namespace std;
class calculator
{
private:
int a,b;
public:
void inputdata()
{
cout<<"enter any number for a="<<endl;
cin>>a;
cout<<"enter any number for b="<<endl;
cin>>b;
}
void display()
{
cout<<"addtion is ="<<a+b<<endl;
cout<<"subtruction is="<<a-b<<endl;
cout<<"division is ="<<a/b<<endl;
cout<<"multipliction is ="<<a*b<<endl;
}
};
int main()
{
calculator c;
c.inputdata();
c.display();
return 0;
} 