#include<stdio.h>
#include<queue>
#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l,m,n;
    string c;
    priority_queue<string>q;
    q.push("a");
    q.push("abc");
    q.push("ab");
    q.push("ac");
    while(!q.empty())
    {
     c=q.top();
     cout<<c<<endl;
     q.pop();
    }
}
