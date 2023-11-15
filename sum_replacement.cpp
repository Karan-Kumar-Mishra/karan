#include<iostream>
#include<stdio.h>
using namespace std;
class node {
    public:
    int info;
    node *left;
    node *right;
};
node* create(int data)
{
    node *ptr =new node;
    ptr->info=data;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}
void display(node *root)
{
    if (root==NULL)
    {
        return;
    }
    else
    {
       cout<<root->info<<" ";
       display(root->left);
       display(root->right);
    }
    
}
void sum_replacement(node *root)
{
    if (root==NULL)
    {
     return;
    }
    sum_replacement(root->left);
    sum_replacement(root->right);
    if(root->left!=NULL)
    {
        root->info+=root->left->info;
    }
    if(root->right!=NULL)
    {
        root->info+=root->right->info;
    }

}
int main()
{
    
    node *root,*p1,*p2,*p3,*p4,*p5,*p6;
    root=create(1);
    p1=create(2);
    p2=create(3);
    p3=create(4);
    p4=create(5);
    p5=create(6);
    p6=create(7);

    
    root->left=p1;
    root->right=p2;

    p1->left=p3;
    p1->right=p4;

    p2->left=p5;
    p2->right=p6;
    display(root);
    sum_replacement(root);
    cout<<endl;
    display(root);

    return 0;
}