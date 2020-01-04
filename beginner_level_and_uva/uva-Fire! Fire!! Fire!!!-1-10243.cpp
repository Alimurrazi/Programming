#include<stdio.h>
#include<string.h>
#include<vector>
#include<queue>
using namespace std;

vector<int>edge[1005];
int dp[1005][3];
int par[1005];

int f(int u,int isgurd)
{
 int i,j,k,l,sum=0,v;
 if(edge[u].size()==0)
  return 1;
 if(dp[u][isgurd]!=-1)
   return dp[u][isgurd];
 for(i=0;i<edge[u].size();i++)
 {
   v=edge[u][i];
   if(v!=par[u])
   {
     par[v]=u;
     if(isgurd==0)
     sum+=f(v,1);
     else
     sum+=min(f(v,1),f(v,0));
   }
 }
 return dp[u][isgurd]=sum+isgurd;
}

int main()
{
  int i,j,k,n,x,y,m;
  while(scanf("%d",&n)==1)
  {
    if(n==0)
    return 0;
    memset(dp,-1,sizeof(dp));
    for(i=1;i<=n;i++)
    {
      scanf("%d",&m);
     for(j=0;j<m;j++)
     {
       scanf("%d",&x);
       edge[i].push_back(x);
     }
    }
    int ans=min(f(1,1),f(1,0));
    printf("%d\n",ans);
    for(i=1;i<=n;i++)
    edge[i].clear();
  }
}
