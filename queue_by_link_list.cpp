#include<iostream>
#include<stdio.h>
using namespace std;
class node
{
  public:
  int info;
  node *next;
};
node* create(int data)
{
    node *ptr= new node;
    ptr->info=data;
    ptr->next=NULL;
}
void display(node *head)
{
    node *ptr=head->next;
    while (ptr!=NULL)
    {
        cout<<ptr->info<<" ";
        ptr=ptr->next;
    }
}
void enqueue(node *head,int data)
{
  node *ptr=head;
  while(ptr->next!=NULL)
  {
    ptr=ptr->next;
  } 
  node *newnode=create(data);
  ptr->next=newnode;
}
void dequeue(node *head)
{
    node *ptr=head->next;
    head->next=head->next->next;
    delete ptr;
}
int main()
{
    node *head,*p1,*p2,*p3;
    head=new node;
    p1=create(10);
    p2=create(20);
    p3=create(30);
    head->next=p1;
    p1->next=p2;
    p2->next=p3;
    p3->next=NULL;
    display(head);
    enqueue(head,40);
    enqueue(head,50);
    enqueue(head,60);

    cout<<endl<<"After enqueue"<<endl;
    display(head);
    dequeue(head);
    dequeue(head);
    dequeue(head);
    cout<<endl<<"After dequeue "<<endl;
    display(head);
    return 0;
}