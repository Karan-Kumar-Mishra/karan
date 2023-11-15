#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    for(auto i:s1)
      cout<<i<<" ";
    cout<<endl;
   

    return 0;
}