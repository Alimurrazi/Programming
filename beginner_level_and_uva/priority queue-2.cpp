#include<stdio.h>
#include<queue>
using namespace std;
/*
struct data
{
  int city,dist;
  bool operator < (const data & p)const
  {
   return p.dist > dist;
  }
};
*/

struct time
{
    int h,m,s;
};

class comparetime
{
public:
    bool operator()(time& t1,time& t2)
    {
        if(t1.h<t2.h)
        return true;
        if(t1.h==t2.h && t1.m<t2.m)
        return true;
        if(t1.h==t2.h && t1.m==t2.m && t1.s<t2.s)
        return true;
        return false;
    }
};

int main()
{
 int i,j;
 priority_queue<time>q;
 time l,k;
 l.city=1;
 l.dist=1;
 q.push(l);
 l.city=2;
 l.dist=112;
 q.push(l);
 l.city=3;
 l.dist=10;
 q.push(l);
 for(i=0;i<3;i++)
 {
 k=q.top();
 printf("%d %d\n",k.city,k.dist);
 q.pop();
 }
}
