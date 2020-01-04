#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
vector<int>edge[100000];
int bfs(int n)
{
 int ara[210],i,u,v;
 for(i=0;i<n;i++)
 ara[i]=-1;

 queue<int>q;
 q.push(0);
 ara[0]=1;

 while(!q.empty())
 {
   u=q.front();
   if(ara[u]==-1)
   ara[u]=1;
   q.pop();
   for(i=0;i<edge[u].size();i++)
   {
    v=edge[u][i];
    if(ara[v]==-1 && ara[u]==2)
    {
     ara[v]=1;
     q.push(v);
    }
    if(ara[v]==-1 && ara[u]==1)
    {
     ara[v]=2;
     q.push(v);
    }
    if(ara[v]==ara[u] && ara[v]!=-1)
    {
     return 0;
    }
   }
 }
   return 1;
}
int main()
{
 int i,j,k,l,m,n,x,y;
 while(scanf("%d",&n)==1)
 {
  if(n==0)
        return 0;
  scanf("%d",&m);
  for(i=0;i<m;i++)
  {
   scanf("%d%d",&x,&y);
   edge[x].push_back(y);
   edge[y].push_back(x);
  }
  if(bfs(n)==0)
   printf("NOT BICOLORABLE.\n");
  else
   printf("BICOLORABLE.\n");
   for(i=0;i<n;i++)
   edge[i].clear();
 }
}
