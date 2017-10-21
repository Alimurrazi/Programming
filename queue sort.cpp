#include<stdio.h>
#include<queue>
using namespace std;


struct data
{
    int h,m,s;
    bool operator < (const data & p)const
    {
     if(p.h>h)
     return p.h>h;
    }
};

priority_queue<data>q;

int main()
{
    int i,j,k,l,m,n;
    data u,v,t,d;

    u.h=3;
    u.m=2;
    u.s=40;

    v.h=3;
    v.m=2;
    v.s=26;

    t.h=5;
    t.m=16;
    t.s=13;

    d.h=5;
    d.m=14;
    d.s=20;

    q.push(u);
    q.push(v);
    q.push(t);
    q.push(d);

    for(i=0;i<4;i++)
    {
    u=q.top();
    printf("%d %d %d \n",u.h,u.m,u.s);
    q.pop();
    }

}
