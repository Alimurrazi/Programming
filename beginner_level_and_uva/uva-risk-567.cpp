#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
vector<int>edge[25];
int start,finish;

void bfs()
{
  int i,j,k,l,u,v,ucost,vcost;
  int ara[25];
  for(i=0;i<25;i++)
  ara[i]=100000000;
  queue<int>q;
  q.push(start);
  ara[start]=0;
  while(!q.empty())
  {
   u=q.front();
   q.pop();
   ucost=ara[u];
   for(i=0;i<edge[u].size();i++)
   {
     v=edge[u][i];
     vcost=ucost+1;
     if(vcost<ara[v])
     {
       q.push(v);
       ara[v]=vcost;
     }
   }
  }
 printf("%2d to %2d: %d\n",start,finish,ara[finish]);
}

int main()
{
 int i,j,k,l,u,v,n,m;
   i=1;
   l=1;
   while(scanf("%d",&n)!=EOF)
   {
   for(j=0;j<n;j++)
   {
     scanf("%d",&u);
     edge[i].push_back(u);
     edge[u].push_back(i);
   }
   i=i+1;
  if(i<20)
  continue;
  printf("Test Set #%d\n",l);
  l=l+1;
  scanf("%d",&n);
  for(i=0;i<n;i++)
 {
 scanf("%d%d",&start,&finish);
 bfs();
 }
 printf("\n");
 for(i=0;i<21;i++)
 edge[i].clear();
  i=1;
   }
}
