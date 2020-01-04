#include<stdio.h>
#include<string.h>
#include<vector>
#include<queue>
#include<stdlib.h>
using namespace std;
vector<int>edge[200];
char check[200];
bool fcheck[200];
bool mcheck[200];
bool dcheck[200][2000];
int p=0,isolate;

int bfs(int n)
{
  int i,j,k,l,bc=0,gc=0,u,v;
  queue<int>q;
  q.push(n);
  while(!q.empty())
  {
    u=q.front();
   // printf("u=%d\n",u);
    q.pop();
    if(check[u]=='a')
    {
    check[u]='b';
    bc++;
    }
    if(edge[u].size()==0)
    isolate=isolate+1;
    mcheck[u]=true;
    for(i=0;i<edge[u].size();i++)
    {
      if(dcheck[u][i]==false)
      {
      v=edge[u][i];
      edge[u][i]=true;
      }
      else
      continue;
     // printf("v=%d \n",v);
      mcheck[v]=true;

      //edge[u].erase(edge[u].begin());
      //printf("uerase=%d\n",edge[u][0]);
      /*
      for(j=0;j<edge[v].size();j++)
      {
       if(edge[v][j]==u)
       {
         edge[v].erase(edge[v].begin()+j);
         printf("verase=%d %d\n",edge[v][j],j);
         break;
       }
      }
       */
      if(check[u]=='b' && check[v]=='a')
      {
        check[v]='g';
        gc++;
        q.push(v);
        fcheck[v]=true;
      }
      if(check[u]=='g' && check[v]=='a')
      {
        check[v]='b';
        bc++;
        q.push(v);
        fcheck[v]=true;
      }
      if(check[u]==check[v])
      {
        p=1;
       // printf("u=%d v=%d\n",u,v);
        return 0;
      }
    }
  }
  return min(bc,gc);
}

int main()
{
  int i,j,k,l,u,v,m,n,t,ans;
  scanf("%d",&t);
  while(t--)
  {
   memset(check,'a',sizeof(check));
   memset(fcheck,false,sizeof(fcheck));
   memset(mcheck,false,sizeof(mcheck));
   memset(dcheck,false,sizeof(dcheck));
   scanf("%d%d",&m,&n);
   for(i=0;i<n;i++)
   {
     scanf("%d%d",&u,&v);
     edge[u].push_back(v);
     edge[v].push_back(u);
   }
   ans=0,isolate=0;
   for(i=0;i<m;i++)
   {
     if(fcheck[i]==true)
     continue;
     ans=ans+bfs(i);
     if(p==1)
     {
       printf("-1\n");
       break;
     }
   }
   if(p==0)
   printf("%d\n",ans+isolate);
   for(i=0;i<m;i++)
   edge[i].clear();
   p=0;
  }
}
