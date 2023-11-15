#include<iostream>
#include<stdio.h>
#include<climits>
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
bool is_identical(node *root1,node *root2){
   if(root1==NULL && root2==NULL)
   {
    return true;
   } 
   if(root1==NULL || root2==NULL)
   {
    return false;
   } 
   else{
    bool c1=root1->data== root2->data;
    bool c2=is_identical(root1->left,root2->left);
    bool c3= is_identical(root1->right,root2->right);
    if(c1 && c2 && c3){
        return true;
    }
    else
    {
        return false;
    }
   }
}

int main()
{
    node *root1,*n1,*n2;
    root1=create(2);
    n1=create(1);
    n2=create(3);
    root1->left=n1;
    root1->right=n2;

    node *root2,*m1,*m2;
    root2=create(2);
    m1=create(1);
    m2=create(4);
    root1->left=m1;
    root1->right=m2;

    if(is_identical(root1,root2))
    {
        cout<<"both BST are identical "<<endl;
    }
    else{
        cout<<"both BST are not identical "<<endl;

    }
   return 0;
}