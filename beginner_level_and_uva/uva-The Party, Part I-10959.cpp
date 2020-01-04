#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
vector<int>edge[1005];
int infinity=10000000;
int p,c;

void bfs()
{
 int d[1100],i,j,k,l,u,v,ucost,vcost;
 for(i=0;i<p;i++)
 d[i]=infinity;

 queue<int>q;
 q.push(0);
 d[0]=0;

 while(!q.empty())
{
 u=q.front();
 q.pop();
 ucost=d[u];

 for(i=0;i<edge[u].size();i++)
 {
  v=edge[u][i];
  vcost=ucost+1;
  if(vcost<d[v])
  {
   q.push(v);
   d[v]=vcost;
  }
 }
}
for(i=1;i<p;i++)
printf("%d\n",d[i]);
}

int main()
{
 int i,j,k,l,m,n,a,b,t;
 scanf("%d",&t);
 while(t--)
 {
 scanf("%d%d",&p,&c);
 for(i=0;i<c;i++)
 {
  scanf("%d %d",&a,&b);
  edge[a].push_back(b);
  edge[b].push_back(a);
 }
 bfs();
 for(i=0;i<p;i++)
 {
   edge[i].clear();
 }
 if(t!=0)
 printf("\n");
 }
}
