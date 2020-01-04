/*
16
1 6
1 12
1 15
1 16
2 3
2 8
2 10
3 4
3 6
3 9
5 6
7 15
11 16
13 15
14 15
*/
#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>
#define MAXN 100002
using namespace std;
int dp[MAXN][5];
int par[MAXN];
vector<int>edges[MAXN];

int f(int u,int isGuard)
{
if(edges[u].size()==0)
    return 0;
if(dp[u][isGuard]!=-1)
return dp[u][isGuard];
int sum=0,i;
for(i=0;i<edges[u].size();i++)
{
int v=edges[u][i];
if(v!=par[u])
{
par[v]=u;
if(isGuard==0)
sum+=f(v,1);
else
sum+=min(f(v,1),f(v,0));
}
}
 dp[u][isGuard]=sum+isGuard;
 printf("%d %d %d\n",u,isGuard,dp[u][isGuard]);
 return dp[u][isGuard];
}

int main()
{
memset(dp,-1,sizeof(dp));
int n;
scanf("%d",&n);
for(int i=1;i<n;i++){
int u,v;
scanf("%d%d",&u,&v);
edges[u].push_back(v);
edges[v].push_back(u);
}
int ans=0;
ans=min(f(1,1),f(1,0));
printf("%d\n",ans);
return 0;
}
