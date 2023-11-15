#include<iostream>
#include<stdio.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    
};
Node* create(int val)
{
    Node *ptr= new Node();
    ptr->data=val;
    ptr->left=ptr->right=NULL;
    return ptr;
}
int height(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;

}
bool isBalanced(Node *root)
{
    if(root==NULL)
    {
        return true;
    }
    if(isBalanced(root->left)==false)
    {
        return true;
    }
    if(isBalanced(root->right)==false)
    {
        return true;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    Node *root,*p1,*p2,*p3,*p4,*p5;
    root=create(10);
    p1=create(20);
    p2=create(30);
    p3=create(40);
    p4=create(50);

    root->left=p1;
    root->right=p2;
    p1->left=p2;
    p1->right=p3;
    p1->left=p4;
    
   /*
   not Balanced tree 
   root->left=p1;
   root->left->left=p2;
   */
    cout<<isBalanced(root)<<endl;
    return 0;
}