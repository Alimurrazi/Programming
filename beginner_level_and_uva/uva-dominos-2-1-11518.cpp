#include<stdio.h>
#include<string.h>
#include<vector>
#include<queue>
using namespace std;

bool check[10005];
vector<int>edge[10005];
int coun;

void dfs(int u)
{
  int i,j,k,l,v;
  queue<int>q;
  q.push(u);
  coun++;
  for(i=0;i<edge[u].size();i++)
  {
    v=edge[u][i];
    if(check[v]==false)
    {
      check[v]=true;
      dfs(v);
    }
  }
}

int main()
{
  int i,j,k,l,m,n,x,y,t;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d%d%d",&n,&m,&l);
    for(i=0;i<m;i++)
    {
      scanf("%d%d",&x,&y);
      edge[x].push_back(y);
    }
   memset(check,false,sizeof(check));
   coun=0;
   for(i=0;i<l;i++)
   {
     scanf("%d",&x);
     if(check[x]==false)
     {
       check[x]=true;
       dfs(x);
     }
   }
   printf("%d\n",coun);
   for(i=0;i<=n;i++)
   edge[i].clear();
  }
}
