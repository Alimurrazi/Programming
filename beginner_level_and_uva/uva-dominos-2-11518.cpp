#include<stdio.h>
#include<string.h>
#include<vector>
#include<queue>
using namespace std;

vector<int>edge[10005];
bool fcheck[10005],check[10005];
queue<int>q;
int coun;

void bfs(int x)
{
 int i,j,k,l,u,v;
 q.push(x);
 while(!q.empty())
 {
   u=q.front();
   q.pop();
   coun++;
   for(i=0;i<edge[u].size();i++)
   {
     v=edge[u][i];
     if(check[v]==false)
     {
       check[v]=true;
       q.push(v);
     }
   }
 }
}

int main()
{
 int i,j,k,t,n,m,l,x,y;
 scanf("%d",&t);
 for(i=0;i<t;i++)
 {
   scanf("%d%d%d",&n,&m,&l);
   for(j=0;j<m;j++)
   {
    scanf("%d%d",&x,&y);
    edge[x].push_back(y);
   }
  memset(check,false,sizeof(check));
  coun=0;
  for(j=0;j<l;j++)
  {
    scanf("%d",&x);
  if(check[x]==false)
  {
  check[x]=true;
  bfs(x);
  }
  }
  printf("%d\n",coun);
  for(j=0;j<=n;j++)
  edge[i].clear();
 }
}
