/*
0 3 10
0 2 23
0 4 1000
3 1 55
1 2 30
1 4 82
2 4 46
3 2 10
*/
#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>
#include<stdlib.h>
using namespace std;

vector<int>edge[100],cost[100];

struct data
 {
   int city,dist;
   bool operator< (const data & p)const
   {
     return p.dist<dist;
   }
 };

void bfs(int start,int finish)
{
 int i,j,k,l,m,n,ucost,vcost;
 int ara[100];
 const long long infinity=10000000;
 for(i=0;i<5;i++)
 ara[i]=infinity;

 priority_queue<data>q;
 data u,v;
 u.city=start,u.dist=0;
 q.push(u);
 ara[start]=0;

 while(!q.empty())
 {
   u=q.top();
  printf("u=%d %d\n",u,ara[u.city]);
  q.pop();
  ucost=ara[u.city];

  for(i=0;i<edge[u.city].size();i++)
  {
   v.city=edge[u.city][i];
   printf("%d %d\n",v.city,ara[v.city]);
   v.dist=ucost+cost[u.city][i];
   if(v.dist<ara[v.city])
   {
     q.push(v);
     ara[v.city]=v.dist;
     printf("%d %d\n",v.city,ara[v.city]);
   }
  }
 }
 printf("%d\n",ara[finish]);
}

int main()
{
  int i,j,m,n,k,start=1,finish=3;
  for(i=0;i<8;i++)
  {
   scanf("%d%d%d",&m,&n,&k);
   edge[m].push_back(n);
   edge[n].push_back(m);
   cost[m].push_back(k);
   cost[n].push_back(k);
  }
  bfs(0,4);
 //printf("%d\n",bfs(1,3));
}
