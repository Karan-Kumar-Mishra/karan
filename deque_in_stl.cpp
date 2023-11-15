#include<iostream>
#include<stdio.h>
#include<deque>
using namespace std;
int main()
{
    deque<int> q1;
    q1.push_back(10);
    q1.push_back(20);
    q1.push_back(30);
    q1.push_back(40);
    q1.push_front(50);
    q1.push_front(60);
    q1.push_front(70);
    q1.push_front(80);
    for (auto i: q1 )
    {
        cout<<i<<" ";
    }
    q1.pop_back();
    q1.pop_front();
    cout<<endl<<"After pop"<<endl;
    for (auto i: q1 )
    {
        cout<<i<<" ";
    }
    


    return 0;
}