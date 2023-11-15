#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(20);
    s.insert(20);
    s.insert(20);
    s.insert(20);
    s.insert(20);

    s.insert(30);
    for(auto i:s)
       cout<<i<< " ";

    cout<<endl<<endl;
    // s.erase(20); remove all 20 
     s.erase(s.find(20)); //remove single 20
     for(auto i:s)
     cout<<i<< " ";
    return 0;
}