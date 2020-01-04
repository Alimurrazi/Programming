#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
vector<int>edge[1010],cost[1010];
int root[1010];
int node,start,finish,street;
int infinity=100000000;

struct data
{
  int city,dist;
  bool operator < (const data & p)const
  {
    return p.dist < dist;
  }
};

void Dijkstra()
{
 int ara[1010];
// int root[1010];
 int i,j,k,l,ucost,vcost;
 for(i=1;i<=node;i++)
 ara[i]=infinity;

 priority_queue<int>q;
 data u,v;
 u.city=start;
 u.dist=0;
 ara[u.city]=0;
 q.push(u.city);
 j=0;

 while(!q.empty())
 {
   u.city=q.top();
   u.dist=ara[u.city];
   root[j]=u.city;
   j++;
   q.pop();

   for(i=0;i<edge[u.city].size();i++)
   {
     v.city=edge[u.city][i];
     vcost=u.dist+cost[u.city][i];
     if(vcost<ara[v.city])
     {
       ara[v.city]=vcost;
       q.push(v.city);
     }
   }
 }
 printf("%d\n",ara[finish]);
}

int main()
{
  int i,j,k,l,m,n,x,y;
  for(i=0;i<3;i++)
  {
    scanf("%d%d%d",&x,&y,&k);
    edge[x].push_back(y);
    edge[y].push_back(x);
    cost[x].push_back(k);
    cost[y].push_back(k);
  }
  start=1,finish=3;
  Dijkstra();
}
