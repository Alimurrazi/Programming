#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;
int degree[50][50];
vector<int>ans;
/*
void dfs(int cur)
{
for(int i=0; i<MAXN; i++)
{
if(g[cur][i]>0)
{
g[cur][i]--;
g[i][cur]--;
dfs(i);
}
}
ans.push_back(cur);
}
*/

void dfs(int u)
{
 printf("u==%d\n",u);
 int i,j,k,l,v;
 for(i=1;i<=10;i++)
 {
  if(degree[u][i]!=0)
  {
   degree[u][i]--;
   degree[i][u]--;
   dfs(i);
  }
  }
ans.push_back(u);
}

int main()
{
  int i,j,k,l,m,n,x,y;
  memset(degree,0,sizeof(degree));
  for(i=0;i<5;i++)
  {
  scanf("%d%d",&x,&y);
  degree[x][y]++;
  degree[y][x]++;
  }
  printf("%d\n",degree[1][1]);
  dfs(1);
  for(i=0;i<ans.size();i++)
  printf("%d\n",ans[i]);
}
