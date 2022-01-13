#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string st="hi iam jack";
// opening file using constructor
    ofstream out("mishra.cpp");
    out<<st;
    return 0;
}
