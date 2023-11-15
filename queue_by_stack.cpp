#include<iostream>
#include<stdio.h>
using namespace std;
class stack
{
    public:
    int info;
    int top;
    int *arr;
void create(int c)
{
    arr= new int[c];
    top=-1;
}
stack()
{
    create(0);
}
void push(int data)
{
    top++;
    arr[top]=data;
}
int  pop()
{
    int k=arr[top];
    top--;
    return k;
}
void display()
{
    for(int i=0;i<=top;i++)
    {
        cout<<arr[i]<<" ";
    }
}
};
class queue
{
  public:
  stack s1;
  stack s2;
void enqueue(int data)
{
    s1.push(data);
}
void dequeue()
{
    s2.push(s1.pop());
    s2.pop ();
}
void display()
{
    s1.display();
    s2.display();
}
};
int main()
{
 queue q1;
 q1.enqueue(10);
 q1.enqueue(20);
 q1.enqueue(30);
 q1.enqueue(40);
 q1.enqueue(50);
 
 cout<<endl<<"After enqueue =>"<<endl;
 q1.display();
 q1.dequeue();
 q1.dequeue();
 q1.dequeue();
 cout<<endl<<"After dequeue =>"<<endl;
 q1.display();

 

 return 0;
}