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
void display(node *root)
{
    if(root==NULL)
    {
        return;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}
int calc_hight(node *root)
{
    if (root==NULL)
    {
        return 0;
    }
    return max(calc_hight(root->left),calc_hight(root->right))+1;
    
}
int calc_diameter(node *root)
{
    if (root==NULL)
    {
        return 0;
    }
    int lhight=calc_hight(root->left);
    int rhight=calc_hight(root->right);
    int currDimameter=lhight+rhight+1;
    
    int lDiameter=calc_diameter(root->left);
    int rDiameter=calc_diameter(root->right);

    return max(currDimameter,max(lDiameter,rDiameter)); 

    
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
    display(root);
    cout<<"diameter =>"<<calc_diameter(root);
    return 0;
}