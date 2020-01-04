#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>
using namespace std;
vector<int>edge[100],cost[100];
const int infinity=10000000;
int bfs(int start,int destination)
{
  int d[100],i,u,v,ucost,vcost;
 // memset(d,infinity,sizeof(d));
 for(i=0;i<100;i++)
   d[i]=infinity;
     //d[i]=0;

  queue<int>q;
  q.push(start);
  d[start]=0;

  while(!q.empty())
  {
   u=q.front();
   printf("%d\n",u);
   q.pop();
   ucost=d[u];
   for(i=0;i<edge[u].size();i++)
   {
     v=edge[u][i];
     vcost=cost[u][i]+ucost;
     if(d[v]>vcost)
     {
      d[v]=vcost;
      q.push(v);
     }
   }
  }
  return d[destination];
}
int main()
{
  int i,j,x,y,k;
  i=0;
  while(scanf("%d%d%d",&x,&y,&k)==3)
  {
    if(x==0 && y==0 && k==0)
     break;
    edge[x].push_back(y);
    edge[y].push_back(x);
    cost[x].push_back(k);
    printf("%d\n",cost[x][i]);
    cost[y].push_back(k);
    i++;
  }
  bfs(1,4);
//  printf("%d\n",bfs(1,5));
}
