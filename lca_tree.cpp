#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
class node
{
  public:
  int info;
  node *left;
  node *right;
};
node* create(int data)
{
    node *ptr= new node;
    ptr->info=data;
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
    cout<<root->info<<" ";
    display(root->left);
    display(root->right);

}
bool getPath(node *root,int key ,vector<int> &path)
{
    if (root==NULL)
    {
        return false;
    }
    
 path.push_back(root->info);
 if (root->info==key)
 {
    return true;
 }
 if(getPath(root->left,key,path) ||getPath(root->right,key,path))
 {
   return true;
 }
 path.pop_back();
 return false;
}
int LCA(node *root,int n1,int n2)
{
    vector<int> path1,path2;
    if (!getPath(root,n1,path1) || !getPath(root,n2,path2))
    {
        return -1;
    }
    int pc;
    for (pc= 0; pc < path1.size() && path2.size(); pc++)
    {
        if(path1[pc]!=path2[pc])
        {
            break;
        }
    }
    return path1[pc-1];
}
int main()
{
    node *root,*p1,*p2,*p3,*p4,*p5;
    root=create(10);
    p1=create(20);
    p2=create(30);
    p3=create(40);
    p4=create(50);
    p5=create(60);
 
    root->right=p1;
    root->left=p2;
    p2->left=p4;
    p2->right=p3;

  

 
    int lca=LCA(root,50,40);
    if (lca==-1)
    {
        cout<<"Lca doesn't exist"<<endl;
    }
    else
    {
       cout<<"Lca is =>"<<lca<<endl;
    }
    
    return 0;
}