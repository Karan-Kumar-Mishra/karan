#include<iostream>
#include<stdio.h>
using namespace std;
class node
{
  public:
  int data;
  node *left;
  node *right;
};
node* create(int info)
{
    node *ptr=new node;
    ptr->data=info;
    return ptr;
}
int count_nodes(node *root)
{
    if (root==NULL)
    {
        return 0;
    }
    return count_nodes(root->left)+count_nodes(root->right)+1;
}
int sum_nodes(node *root)
{
    if (root==NULL)
    {
        return root->data;
    }
    return count_nodes(root->left)+count_nodes(root->right)+root->data;
}
int hight(node *root)
{
    if (root==NULL)
    {
        return 1;
    }
    int hight_left=hight(root->left);
    int hight_right=hight(root->right);
    return max(hight_left,hight_right)+1;    
}
int main()
{
    node *root,*p1,*p2,*p3,*p4,*p5;
    root=create(99);
    p1=create(10);
    p2=create(20);
    p3=create(30);
    p4=create(40);
    p5=create(50);
    root->left=p1;
    root->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    cout<<"hight of node in tree is => "<<hight(root)<<endl;
    return 0;
}