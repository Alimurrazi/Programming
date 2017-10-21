#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>
using namespace std;
vector<int>edge[100005];
bool di[100005];
long infinity =100000000;
int start,value,high;

void bfs(int start,int value)
{
 int i,j,k,l,m,n,u,v,ucost,vcost,coun=0;
 int d[100005];
// memset(di,false,sizeof(di));
 for(i=0;i<100000;i++)
 d[i]=infinity;

 queue<int>q;
 q.push(start);
 d[start]=0;
 //di[start]=true;

 while(!q.empty())
 {
 // if(di[u]==false)
  u=q.front();
  q.pop();
  di[u]=true;

  ucost=d[u];

  for(i=0;i<edge[u].size();i++)
  {
   v=edge[u][i];
   vcost=ucost+1;
   if(vcost<d[v])
   {
    d[v]=vcost;
    q.push(v);
   }
  }
 }
// printf("%d",high);
 for(i=0;i<=high;i++)
 {
  if(d[i]>value && di[i]==true)
    coun++;
 }
 printf("%d nodes not reachable from node %d with TTL = %d.\n",coun,start,value);
}

int main()
{
  int i,j,k,l,m=1,n,x,y;
  while(scanf("%d",&n)==1)
  {
   high=0;
   if(n==0)
    return 0;
   memset(di,false,sizeof(di));
  while(n--)
  {
   scanf("%d%d",&x,&y);
   edge[x].push_back(y);
   edge[y].push_back(x);
   if(x>high)
   high=x;
   if(y>high)
   high=y;
  di[x]=true;
  di[y]=true;
  }
 // printf("%d",high);
  while(1)
  {
   scanf("%d%d",&start,&value);
   if(start==0 && value==0)
      break;
   printf("Case %d: ",m++);
   bfs(start,value);
  }
  for(i=0;i<100000;i++)
  edge[i].clear();
  }
}
