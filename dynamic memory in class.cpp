#include<iostream>
#include<conio.h>
using namespace std;
class shop
{
    int id ;
    float price;
public:
    void setdata(int x,float y)
    {
        id = x;
        price=y;
    }
    void showdata()
    {
        cout<<"the id of this product is ="<<id<<endl;
        cout<<"the price of this product is="<<price<<endl;
    }
};
int main()
{
    int size=3;
    shop *ptr=new shop[size];
    shop *ptrtemp=ptr;
    int p,i;
    float q;
    for(i=0; i<size; i++)
    {
        cout<<"enter id and price of product="<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for(i=0; i<size; i++)
    {
        cout<<"item number"<<i+1<<endl;
        ptrtemp->showdata();
        ptrtemp++;
    }
    return 0;
}
