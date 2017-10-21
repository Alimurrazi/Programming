#include<stdio.h>
#include<queue>
#include<string.h>
#include<iostream>
using namespace std;

struct data
{
    int str;
    bool operator < (const data & p)const
    {
        if(p.str>str)
            return false;
    }
};


int main()
{
    priority_queue<data>q;
    data u,v;
    u.str=100;
    q.push(u);
    u.str=45;
    q.push(u);
    u.str=670;
    q.push(u);
    while(!q.empty())
    {
       // string k;
        int k;
        u=q.top();
        k=u.str;
        cout<<k<<endl;
//        printf("%s\n",k);
        q.pop();
    }
}
