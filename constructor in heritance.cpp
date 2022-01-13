#include<iostream>
using namespace std;
class base1
{
    int data1;
public:
    base1(int i)
    {
        data1=i;
        cout<<"base1 class constructor is called"<<endl;
    }
    void print1()
    {
        cout<<"the value of data1 is="<<data1<<endl;
    }
};
class base2
{
    int data2;
public:
    base2(int i)
    {
        data2=i;
        cout<<"basse2 class constructor is called"<<endl;
    }
    void print2()
    {
        cout<<"the value of data2 is="<<data2<<endl;
    }
};
class derived:public base1,public base2
{
    int d1,d2;
public:
    derived(int a,int b,int c,int d):base1(a),base2(b)
    {
        d1=c;
        d2=d;
        cout<<"derived constructor is called "<<endl;
    }
    void print3()
    {
        cout<<"the value of derived1 is="<<d1<<endl;
        cout<<"the value of derived2 is="<<d2<<endl;
    }
};
int main()
{
derived a(1,2,3,4);
a.print3();
return 0;
}

