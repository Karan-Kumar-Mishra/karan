#include<stdio.h>
#include<iostream>
using namespace std;
class node
{
  public:
  int data;
  node *left,*right;
};
node* create(int info){
    node *ptr= new node();
    ptr->data=info;
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
        display(root->left);
        cout<<root->data<<" ";
        display(root->right);
    }
}
node* insert_in_bst(node *root,int val)
{
    if (root==NULL)
    {
        node *ptr=create(val);
        return ptr;
    }
    if (val <root->data)
    {
      root->left=insert_in_bst(root->left,val);        
    }
    else
    {
        root->right=insert_in_bst(root->right,val);
    }
    return root;
}
int main()
{
    node *root=NULL;
    root=insert_in_bst(root,5);
    insert_in_bst(root,1);
    insert_in_bst(root,3);
    insert_in_bst(root,4);
    insert_in_bst(root,2);
    insert_in_bst(root,7);
    display(root);
    
    return 0;
}