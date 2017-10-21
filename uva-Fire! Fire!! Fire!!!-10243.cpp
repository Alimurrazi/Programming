#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>
using namespace std;

vector<int>edge[1000];
bool mcheck[1000];
bool echeck[1000][1000];
char check[1000];
int p;

int bfs(int n)
{

  int i,j,k,u,v,bc=0,gc=0;
  queue<int>q;
  q.push(n);

  while(!q.empty())
  {
   u=q.front();
  // printf("u=%d %c\n",u,check[u]);
   mcheck[u]=true;
   if(check[u]=='a')
   {
   check[u]='b';
   bc++;
   }
   q.pop();

   for(i=0;i<edge[u].size();i++)
   {
    v=edge[u][i];
  //  printf("v=%d %c\n",v,check[v]);
    if(echeck[u][v]==true)
    continue;
    if(mcheck[v]==false)
    q.push(v);
    mcheck[v]=true;
    echeck[u][v]=echeck[v][u]=true;
    if(check[v]=='a' && check[u]=='b')
    {
      check[v]='g';
      gc++;
    }
    if(check[v]=='a' && check[u]=='g')
    {
      check[v]='b';
      bc++;
    }
    if(check[v]==check[u])
    {
   //   p++;
   printf("same %d %d\n",u,v);
    if(check[v]=='b')
     bc=bc-1;
    if(check[v]=='g')
     gc=gc-1;
    }
   }

  }
  printf("jj\n");
  return min(bc,gc);
}

int main()
{
 int i,j,k,l,m,n,x,y,ans;
 while(scanf("%d",&n)==1)
 {
   if(n==0)
   return 0;
  ans=0,p=0;
  memset(check,'a',sizeof(check));
  memset(echeck,false,sizeof(echeck));
  memset(mcheck,false,sizeof(mcheck));
  for(i=1;i<=n;i++)
  {
  scanf("%d",&m);
  for(j=0;j<m;j++)
  {
   scanf("%d",&y);
   edge[i].push_back(y);
  }
  }
  for(i=1;i<=n;i++)
  {
   if(mcheck[i]==true)
    continue;
  ans=ans+bfs(i);
  }
  printf("%d\n",ans);
  for(i=1;i<=n;i++)
  printf("%d %c\n",i,check[i]);
  for(i=1;i<=n;i++)
  edge[i].clear();
 }
}
