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
bool check_is_bst(node *root,node *MAX=NULL,node *MIN=NULL)
{
 if (root==NULL)
 {
    return true;
 }
 
 if (MIN!=NULL && root->data>=MIN->data)
 {
    return false;
 }

 if (MAX!=NULL && root->data<=MAX->data)
 {
    return false;    
 }
 
 bool left_value=check_is_bst(root->left,MIN,root);
 bool right_value=check_is_bst(root->right,root,MAX);
 return left_value and right_value;
}
bool isBSTUtil(node* root, int minValue, int maxValue) {
    if (root == nullptr)
        return true;

    if (root->data <= minValue || root->data >= maxValue)
        return false;

    return isBSTUtil(root->left, minValue, root->data) &&
           isBSTUtil(root->right, root->data, maxValue);
}
bool isBST(node* root) {
    return isBSTUtil(root, INT_MIN, INT_MAX);
}
int main()
{
    node *p1,*p2,*p3,*p4,*p5,*p7,*p8;
    p1=create(1);
    p2=create(2);
    p3=create(3);
    p4=create(4);
    p5=create(5);
    p7=create(7);
    p8=create(8);


    p3->left=p2;
    p3->right=p7;

    p2->left=p1;
    p7->right=p8;
    p7->left=p5;

  // p3->left=p1;
   //p3->right=p4;
    display(p3);
    cout<<"is BST =>"<<isBST(p3);
    
    return 0;
}