#include<stdio.h>
#include<queue>
#include<vector>
#include<string.h>
using namespace std;
vector<int>edge[1000005],cost[1000005];
int nocity,noroad;

struct data
{
  int city,dist;
  bool operator < (const data & p)const
  {
  return p.dist < dist;
  }
};

void mst()
{
 bool visited[1000005];
 int i,j,k,l,m,ans,s;
 priority_queue<data>q;
 data u,v,t,d;
 k=1,ans=0;
 memset(visited,false,sizeof(visited));

 for(i=1;i<nocity;i++)
 {
  u.city=k;
  visited[u.city]=true;

  for(j=0;j<edge[u.city].size();j++)
  {
   v.city=edge[u.city][j];
   if(visited[v.city]!=true)
   {
    d.city=v.city;
    d.dist=cost[u.city][j];
    q.push(d);
   }
  }
/*
  t=q.top();
  k=t.city;
  s=t.dist;
  q.pop();

  while(1)
  {
  if(visited[k]!=1)
  break;
  t=q.top();
  k=t.city;
  s=t.dist;
  q.pop();
  }
 */
   while(1)
  {
  t=q.top();
  k=t.city;
  s=t.dist;
  q.pop();
  if(visited[k]!=1)
  break;
  }

  ans=ans+s;
 }
 printf("%d\n",ans);
}

int main()
{
 int i,j,k,x,y,m,n,p;
 p=0;
 while(scanf("%d",&nocity)==1)
 {
 for(i=0;i<nocity-1;i++)
 {
 scanf("%d%d%d",&x,&y,&k);
 edge[x].push_back(y);
 edge[y].push_back(x);
 cost[x].push_back(k);
 cost[y].push_back(k);
 }
 if(p==1)
 printf("\n");
 p=1;
 mst();
 for(i=1;i<=nocity;i++)
 {
  edge[i].clear();
  cost[i].clear();
 }
 scanf("%d",&k);
 for(i=0;i<k;i++)
 {
 scanf("%d%d%d",&x,&y,&j);
 edge[x].push_back(y);
 edge[y].push_back(x);
 cost[x].push_back(j);
 cost[y].push_back(j);
 }
 scanf("%d",&m);
 for(i=0;i<m;i++)
 {
 scanf("%d%d%d",&x,&y,&k);
 edge[x].push_back(y);
 edge[y].push_back(x);
 cost[x].push_back(k);
 cost[y].push_back(k);
 }
 mst();
 for(i=1;i<=nocity;i++)
 {
  edge[i].clear();
  cost[i].clear();
 }
 }
}
