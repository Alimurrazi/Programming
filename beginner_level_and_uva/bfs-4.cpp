#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>
using namespace std;

vector<int>edge[10];
vector<int>cost[10];
queue<int>q;
int visited[10];

int bfs(int start,int dest)
{
 int i,j,k,l,u,v,ucost,vcost;
 int d[10];
 for(i=0;i<10;i++)
 d[i]=1000000;
 q.push(start);
 visited[u]=1;
 d[u]=0;

 while(!q.empty())
 {
  u=q.front();
  q.pop();
  ucost=d[u];
  for(i=0;i<edge[u].size();i++)
  {
   v=edge[u][i];
   vcost=ucost+cost[u][i];
   if(vcost<d[v])
   {
   d[v]=vcost;
   q.push(v);
   }
  }
 }
 return d[dest];
}

int main()
{
 int i,j,k,l,m,n,x,y;
 memset(visited,0,sizeof(visited));
 scanf("%d%d",&n,&m);
 for(i=0;i<m;i++)
 {
 scanf("%d%d",&x,&y);
 edge[x].push_back(y);
 edge[y].push_back(x);
 cost[x][y]=cost[y][x]=1;
 }
 bfs(1,4);
}
