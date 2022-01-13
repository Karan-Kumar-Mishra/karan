#include<iostream>
using namespace std;
class student
{
 protected:
  int rollnumber;
 public:
 void set_rollnumber(int x);
 void get_rollnumber();
};
void student::set_rollnumber(int x)
{
 rollnumber=x;
}
void student::get_rollnumber()
{
 cout<<"the rol number is ="<<rollnumber<<endl;
}
class exam:public student
{
 protected:
 float maths;
 float physisc;
 public:
 void set_marks(float,float);
 void get_marks();
};
void exam::set_marks(float x,float y)
{
 maths=x;
 physisc=y;
}
void exam::get_marks()
{
 cout<<"the mark of maths is="<<maths<<endl;
 cout<<"the mark of physisic is="<<physisc<<endl;
}
int main()
{
exam e1;
 e1.set_rollnumber(45);
 e1.set_marks(91.0,88.0);
e1.get_rollnumber();
e1.get_marks(); 
 return 0;
}





 