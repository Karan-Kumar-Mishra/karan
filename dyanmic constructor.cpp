#include<iostream>
using namespace std;
class bankdeposit
{
 int years;
 int principal;
 int interestrate;
 int returnvalue;
public:
 bankdeposit() {     }
 bankdeposit(int p,int y,float r);
 bankdeposit(int p,int y,int r);
void showdata()
{
 cout<<"the value of principal is="<<principal<<endl;
 cout<<"the value of years is="<<years<<endl;
 cout<<"the rate is"<<interestrate<<endl;
}
};
bankdeposit::bankdeposit(int p,int y,float r)
{
 principal=p;
 years=y;
 interestrate=r;
for(int i=0;i<y;i++)
{
 returnvalue=returnvalue*(1+r);
}
}
bankdeposit::bankdeposit(int p,int y,int r)
{
 principal=p;
 years=y;
 interestrate=float(p)/100;
 interestrate=principal;
 for(int i=0;i<y;i++)
{
 returnvalue=returnvalue+(1+r);
}
}
int main()
{
 bankdeposit db1,db2,bd3;
 int p,y;
 float r;
 int R;
 cout<<"enter your year"<<endl;
cin>>y;
cout<<"enter the rate"<<endl;
cin>>r;
cout<<"enter your principal"<<endl;
 cin>>p;
 
db2=bankdeposit(p,y,float(r));
db2.showdata();

 
return 0;
}

