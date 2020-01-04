#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>

using namespace std;
vector<int>edge[100005];
queue<int>q;

int bfs(int m)
{
  int d[100005],i,u,v,j,coun;
  memset(d,0,sizeof(d));

  //queue<int>q;
  //q.push(k);
  coun=0;

  while(!q.empty())
  {
   u=q.front();
   q.pop();

   if(d[u]==0)
   {
    d[u]=1;
    coun++;
   }

   for(i=0;i<edge[u].size();i++)
   {
    v=edge[u][i];
    if(d[v]==0)
    {
    d[v]=1;
    q.push(v);
    }
   }
  }
  return coun;
}

int main()
{
  int i,j,k,x,y,t,m,n;
  scanf("%d",&t);
  while(t--)
  {
   scanf("%d%d",&m,&n);
   for(i=0;i<n;i++)
   {
    scanf("%d%d",&x,&y);
    edge[x].push_back(y);
    edge[y].push_back(x);
    q.push(x);
    q.push(y);
   }
   printf("%d\n",bfs(m));
   for(i=1;i<=m;i++)
   edge[i].clear();
  }
}
