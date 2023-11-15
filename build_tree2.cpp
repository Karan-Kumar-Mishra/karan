#include<iostream>
#include<stdio.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
int search(int inorder[],int start,int end,int val)
{
    for (int i = start; i <=end ; i++)
    {
        if (inorder[i]==val)
        {
            return i;
        }
    }
    return -1;
}
Node* bulidTree(int postorder[],int inorder[],int start,int end)
{
    
  static int idx=4;
  if(start>end)
  {
    return NULL;
  }
  int val=postorder[idx];
  idx--;
  Node* curr = new Node(val);
  if(start==end)
  {
    return curr;
  }
  int pos=search(inorder,start,end,val);
  curr->right=bulidTree(postorder,inorder,pos+1,end);
  curr->left=bulidTree(postorder,inorder,start,pos-1);
  return curr;
}
void display(Node *root)
{
   if(root==NULL)
    {
        return;
    }
    display(root->left);
    cout<< root->data<<" ";
    display(root->right);
    
}
int main()
{
    
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};
    Node* root=bulidTree(postorder,inorder,0,4);
    display(root);
    return 0;
}