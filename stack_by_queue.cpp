
#include<bits/stdc++.h>
using namespace std;
class Stack
{
  int n;
  queue<int> q1;
  queue<int> q2;
  public:
  Stack()
  {
    n=0;
  }
  void push(int data)
  {
    q2.push(data);
    n++;
    while (!q1.empty())
    {
      q2.push(q1.front());
      q1.pop();
    }
    queue<int> temp=q1;
    q1=q2;
    q2=temp;
    
  }
  void pop()
  {
    q1.pop();
    n--;
  }
  int top()
  {
    return q1.front();
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
 cout<<s1.top()<<endl;

 
  return 0;
}