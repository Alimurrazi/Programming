#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>
using namespace std;
vector<int>edge[101];
int n;

void bfs(int k)
{
 int i,j,l,m,u,v;
 queue<int>q;
 bool check[101];
 memset(check,false,sizeof(check));
 q.push(k);
 l=0;

 while(!q.empty())
 {
  u=q.front();
  q.pop();
  for(i=0;i<edge[u].size();i++)
  {
    v=edge[u][i];
    if(check[v]==true)
     continue;
    if(check[v]==false)
    {
    check[v]=true;
    l++;
    }
    q.push(v);
  }
 }
 printf("%d",n-l);
//l=0;
 //for(i=1;i<=n;i++)
// {
 // if(check[i]==false)
  // l++;
// }
// printf("%d",l);
 for(i=1;i<=n;i++)
 {
  if(check[i]==false)
    printf(" %d",i);
 }
  printf("\n");
}

int main()
{
 int i,j,k,l,m,x,y;
 while(scanf("%d",&n)==1)
 {
   if(n==0)
   return 0;
   while(scanf("%d",&x)==1)
   {
     if(x==0)
     break;
     while(scanf("%d",&y)==1)
     {
      if(y==0)
      break;
      edge[x].push_back(y);
     }
   }
   scanf("%d",&m);
   for(i=0;i<m;i++)
   {
   scanf("%d",&k);
   bfs(k);
   }
   for(i=1;i<=n;i++)
   edge[i].clear();
 }
}
