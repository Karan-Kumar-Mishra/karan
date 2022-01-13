#include<iostream>
using namespace std;
class num
{
 int count =0;
 public:
  num()
{
count++;
cout<<"this is the time when constructor is called for object number "<<count<<endl;

}
~num()
{
 cout<<"the is the time when my dstructor is called for object"<<count<<endl;
 count--;
}
};
int main()
{
 cout<<"we are inside our main function"<<endl;
 num n1;
{
 cout<<"entering this block"<<endl;
 num n2,n3;

 cout<<"exiting this block"<<endl;
 }
 cout<<"back to main function"<<endl;
 return 0;
} 
