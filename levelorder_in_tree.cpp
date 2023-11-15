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
void print_levelorder(Node * root)
{
    if(root==NULL)
    {
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp=q.front();
        q.pop();
        if (temp)
        {
            cout<<temp->data<<" ";
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
            
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
        
        
    }
    

     
}
int main()
{
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->right->left=new Node(4);
    root->right->right=new Node(5);
    print_levelorder(root);
    return 0;
}