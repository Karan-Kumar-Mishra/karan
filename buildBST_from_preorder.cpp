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
        cout<<root->data<<" ";
        display(root->left);
        display(root->right);
    } 
}
node* construct_bst(int preorder[],int *preorderindx,int key,int min,int max,int n){
    if(*preorderindx>=n){
        return NULL;
    }
    node *root=NULL;
    if(key>min && key>max)
    {
       node *root=new node();
       root->data=key;
       *preorderindx=*preorderindx+1;
       if(*preorderindx<n){
        root->left=construct_bst(preorder,preorderindx, preorder[*preorderindx],min,key,n);
       }
       if(*preorderindx<n){
        root->right=construct_bst(preorder,preorderindx, preorder[*preorderindx],key,max,n);
       }
    }
    return root;
}
int main()
{
    //pending 
    int arr[]={10,2,1,13,11};
    int n=5;
    int preorederIdx=0;
    node* root=construct_bst(arr,&preorederIdx,arr[0],INT16_MAX,INT16_MIN,n);
    display(root);
    return 0;
}