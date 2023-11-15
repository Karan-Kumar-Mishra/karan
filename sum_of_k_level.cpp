#include<iostream>
#include<stdio.h>
#include<queue>
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
int sum_of_k(Node * root,int k)
{
    int sum=0;
    int level=0;
    if(root==NULL)
    {
        return -1;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp=q.front();
        q.pop();
        if (temp!=NULL)
        {
            if(level==k)
            {
             sum=sum+temp->data;
            }
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
            
        }
        else if (!q.empty())
        {
            q.push(NULL);
            level++;
        }
        
    }   
        return sum;    
}
int main()
{
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->right->left=new Node(4);
    root->right->right=new Node(5);
    cout<<sum_of_k(root,3);   
    return 0;
}