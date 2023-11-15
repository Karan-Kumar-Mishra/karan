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
void preorder(node *root)
{
    if (root==NULL)
    {
        return;
    }
    else
    {
     clog<<root->data<<" ";
     preorder(root->left);
     preorder(root->right);
    }
    
}
node* array_to_BST(int arr[],int start,int end){
    if(start>end){
        return NULL;
    }
    int mid=(start+end)/2;
    node* root=new node();
    root->data=arr[mid];
    root->left=array_to_BST(arr,start,mid-1);
    root->right=array_to_BST(arr,mid+1,end);
    return root;
}
int main()
{
    int arr[]={10,20,30,40,50};
    node* root=array_to_BST(arr,0,4);
    preorder(root);

    return 0;
}