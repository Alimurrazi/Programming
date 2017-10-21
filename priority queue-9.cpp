#include<stdio.h>
#include<queue>
using namespace std;

struct data
{
    char c;
    int h,m,s;
    bool operator < (const data & p)const
    {
    // if(p.dist > dist)
   //  return true;

    //   if(p.dist==dist && p.city>city)
     //   return false;
     //  if(p.dist > dist)
     //   return false;
                         //  return p.dist < dist;
   //  return true;
     //  return dist > p.dist;
     //  return false;
      if(p.h<h)
      return false;
      if(p.h==h && p.m<m)
      return false;
      if(p.h==h && p.m==m && p.s<s)
      return false;
      if(p.h==h && p.m==m && p.s==s && p.c<c)
      return false;
      return true;
    }
};

priority_queue<data>q;

int main()
{
    data u,v,t;
    int i,j,k,l,m,n;
    u.c='d';
    u.h=1;
    u.m=10;
    u.s=15;
    q.push(u);
    u.c='a';
    u.h=2;
    u.m=10;
    u.s=12;
    q.push(u);
    u.c='b';
    u.h=1;
    u.m=15;
    u.s=25;
    q.push(u);
    u.c='c';
    u.h=1;
    u.m=15;
    u.s=20;
    q.push(u);
    u.c='z';
    u.h=2;
    u.m=10;
    u.s=12;
    q.push(u);
    while(!q.empty())
    {
     v=q.top();
     printf("%c %d %d %d\n",v.c,v.h,v.m,v.s);
     q.pop();
    }
}
