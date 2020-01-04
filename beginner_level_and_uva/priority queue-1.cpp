#include<stdio.h>
#include<string.h>
#include<queue>
using namespace std;

struct data
{
  int city,dist;
  bool operator < (const data & p)const
  {
    return p.dist<dist;
  }
};

int main()
{
  int i,j,k,l,m,n;
  priority_queue<data>q;
  data u,v;
  u.city=1;
  u.dist=10;
  q.push(u);
  for(i=1;i<=3;i++)
  {
    v.city=i;
    scanf("%d",&m);
    v.dist=m;
    q.push(v);
  }
  //for(i=0;i<3;i++)
 // printf("%d %d\n",u.city,v.dist);
 for(i=0;i<4;i++)
 {
   //m=q.top();
   printf("%d\n",q.top());
   q.pop();
   //printf("%d\n",m);
 }
}
