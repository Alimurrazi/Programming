#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;

vector<int>ans;
vector<int>edge[10];
bool check[20];

void dfs(int u)
{
  int i,j,v;
  check[u]=true;
  ans.push_back(u);
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
 int i,j,k,l,m,n,x,y;
 for(i=0;i<5;i++)
 {
  scanf("%d%d",&x,&y);
  edge[x].push_back(y);
  edge[y].push_back(x);
 }
  memset(check,false,sizeof(check));
  for(i=1;i<=4;i++)
  {
   if(check[i]==false)
   dfs(i);
  }
  for(i=0;i<4;i++)
  printf("%d\n",ans[i]);
}
