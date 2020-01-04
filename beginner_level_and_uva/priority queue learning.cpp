#include<stdio.h>
#include<queue>
using namespace std;

struct data
{
    int city,dist;
    bool operator < (const data & p)const
    {
     if(p.dist > dist)
     return false;
   /*
       if(p.dist==dist && p.city>city)
        return false;
       if(p.dist > dist)
        return false;
        */
                         //  return p.dist < dist;
   //  return true;
     //  return dist > p.dist;
     //  return false;
  //   return p.dist<dist;
    }
};

priority_queue<data>q;

int main()
{
    data u,v,t;
    int i,j,k,l,m,n;
    u.city=1;
    u.dist=10;
    q.push(u);
    u.city=2;
    u.dist=11;
    q.push(u);
    u.city=3;
    u.dist=15;
    q.push(u);
    u.city=0;
    u.dist=13;
    q.push(u);
    while(!q.empty())
    {
     v=q.top();
     printf("%d %d\n",v.city,v.dist);
     q.pop();
    }
}
