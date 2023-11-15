#include<iostream>
#include<queue>
using namespace std;
class Stack
{
    queue<int> q1;
    queue<int> q2;
    int n=0;
    public:
    void push(int data)
    {
        q1.push(data);
        n++;
    }
    int pop()
    {
        if(q1.empty())
        {
            return -1;
        }
        while (q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        n--;
        queue<int> temp;
        temp=q1;
        q1=q2;
        q2=temp;
    }
    int top()
    {
      while (q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int val=q1.front();
        q2.push(val);
        queue<int> temp;
        temp=q1;
        q1=q2;
        q2=temp;
        return val;
    }
    int size()
    {
        return n;
    }

};
int main()
{
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    cout<<s1.size()<<endl; 

    return 0;
}
