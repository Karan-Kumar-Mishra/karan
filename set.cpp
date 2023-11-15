#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    for (auto i:s)
       cout<<i<<endl;
    for (auto i=s.begin();i!=s.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    //print in reverse order
    for (auto i=s.rbegin();i!=s.rend();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"greater"<<endl;
    set<int,greater<int>> s2;
    s2.insert(10);
    s2.insert(20);
    s2.insert(30);
    for (auto i:s2)
       cout<<i<<endl;
    
    cout<<"lower_bound 30=>"<<*s2.lower_bound(30)<<endl;
    cout<<"upper_bound 10=>"<<*s2.upper_bound(20)<<endl;
    s2.erase(10);
    s2.erase(s2.begin());
    
    for (auto i:s2)
       cout<<i<<endl;
    
    
    return 0;
}