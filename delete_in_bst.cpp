#include<stdio.h>
#include<iostream>
using namespace std;
//delete in binary tree
class node
{
  public:
  int data;
  node *left;
  node *right;
};
node* create(int info)
{
    node *ptr=new node();
    ptr->data=info;
    ptr->left=ptr->right=NULL;
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
node* search(node *root,int key)
{
 if(root==NULL)
 {
    return NULL;
 }
 if (root->data==key)
 {
    return root;
 }
 if (root->data>key)
 {
    return search(root->left,key);
 }
 return search(root->right,key);
 
}
node* inordersuccor(node* root)
{
    node *temp=root;
    while (temp && temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp;
}
node* delete_in_bst(node *root,int key)
{
  if(key>root->data)
  {
    root->right=delete_in_bst(root->right,key);
    return root;
  }
  if (key<root->data)
  {
    root->left=delete_in_bst(root->left,key);
    return root;
  }
  else{
    if(root->left==NULL)
    {
        node* temp=root->right;
        free(root);
        return temp;
    }
    else if(root->right==NULL)
    {
        node* temp=root->left;
        free(root);
        return temp;
    }
    node *temp=inordersuccor(root->right);
    root->data=temp->data;
    root->right=delete_in_bst(root->right,temp->data);
  }

  return root;
}
int main()
{
    node *p1,*p2,*p3,*p4,*p5,*p6,*p7,*p8;
    p1=create(10);
    p2=create(20);
    p3=create(30);
    p4=create(40);
    p5=create(50);
    p6=create(60);
    p7=create(70);
    p8=create(80);



   
    p3->right=p7;
    p3->left=p2;

    p2->left=p1;

    p7->right=p8;
    p7->left=p5;

    p5->left=p4;
    p5->right=p6;
    display(p3);
    cout<<endl<<endl;
    delete_in_bst(p3,30);
    cout<<endl<<endl;;
    display(p3);


    
    
    return 0;
}