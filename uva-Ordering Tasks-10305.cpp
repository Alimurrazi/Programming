#include<stdio.h>
#include<queue>
#include<vector>
#include<string.h>
using namespace std;
vector<int>edge[101];
int indegree[101];
bool check[101];
int m,n;

void topsort()
{
  int ara[101];
  queue<int>q;
  int i,j,k,l,u,v;
  memset(check,false,sizeof(check));
  j=0;
  for(i=1;i<=m;i++)
  {
   if(indegree[i]==0)
   {
    q.push(i);
    check[i]=true;
   }
  }
  while(!q.empty())
  {
    u=q.front();
    ara[j++]=u;
    check[u]=true;
    q.pop();
    for(i=0;i<edge[u].size();i++)
    {
      v=edge[u][i];
      indegree[v]=indegree[v]-1;
    }
   for(i=1;i<=m;i++)
   {
     if(indegree[i]==0)
     {
       if(check[i]==false)
       {
         q.push(i);
         check[i]=true;
       }
     }
   }
  }
  for(i=0;i<j-1;i++)
  printf("%d ",ara[i]);
  printf("%d\n",ara[j-1]);
}

int main()
{
  int i,j,k,l,x,y;
  while(scanf("%d%d",&m,&n)==2)
  {
    if(m==0 && n==0)
    return 0;
    for(i=1;i<=m;i++)
    indegree[i]=0;
    for(i=0;i<n;i++)
    {
     scanf("%d%d",&x,&y);
     indegree[y]=indegree[y]+1;
     edge[x].push_back(y);
    }
   topsort();
   for(i=1;i<=m;i++)
   edge[i].clear();
  }
}
