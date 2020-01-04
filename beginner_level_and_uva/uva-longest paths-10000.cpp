#include<stdio.h>
#include<string.h>
#include<vector>
#include<queue>

using namespace std;
vector<int>edge[101],cost[101];
const int infinity=1000000;

int bfs(int m,int n)
{
  int d[100],i,j,ucost,vcost,u,v,maxx;
  for(i=1;i<=m;i++)
  d[i]=0;

  queue<int>q;
  q.push(n);
  //d[n]=infinity;
  maxx=0;
  while(!q.empty())
  {
    u=q.front();
    printf("%d ",u);
    q.pop();
    ucost=d[u];

    for(i=0;i<edge[u].size();i++)
    {
      v=edge[u][i];
      vcost=ucost+cost[u][i];
      if(d[v]<vcost)
      {
        q.push(v);
        d[v]=vcost;
        if(vcost>maxx)
        maxx=vcost;
      }
    }
  }
  return maxx;
}

int main()
{
  int i,j,k,l,m,n,a,b;
  while(scanf("%d%d",&m,&n)==2)
  {
   for(i=0; ;i++)
   {
    scanf("%d%d",&a,&b);
    if(a==0 && b==0)
    break;
    edge[a].push_back(b);
    edge[b].push_back(a);
    cost[a].push_back(1);
    cost[b].push_back(1);
   }
    printf("%d\n",bfs(m,n));
  }
}
