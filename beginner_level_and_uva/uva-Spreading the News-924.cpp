#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>
using namespace std;

int ara[2505];
vector<int>edge[2505];
bool check[2505];

void bfs(int start)
{
 queue<int>q;
 int i,j,k,l=0,m,n,u,v,serial;
 memset(check,false,sizeof(check));

 q.push(start);

   while(!q.empty())
   {
     u=q.front();
     q.pop();
     if(check[u]==true)
     continue;
     check[u]=true;
     serial=0;
     for(i=0;i<edge[u].size();i++)
     {
       v=edge[u][i];
       q.push(v);
       serial++;
     }
     ara[l++]=serial;
   }

  k=0;
  for(i=0;i<l;i++)
  {
   if(ara[i]>k)
   k=ara[i];
  }
  if(k>0)
  printf("%d ",k);
}

int main()
{
  int i,j,k,l,m,n,e,nf,f,test,first;
  while(scanf("%d",&e)==1)
  {
   for(i=0;i<e;i++)
   {
    scanf("%d",&nf);
    for(j=0;j<nf;j++)
    {
      scanf("%d",&f);
      edge[i].push_back(f);
    }
   }
   scanf("%d",&test);
   for(i=0;i<test;i++)
   {
     scanf("%d",&first);
     bfs(first);
    printf("%d\n",edge[first].size());
   }
   for(i=0;i<e;i++)
   edge[i].clear();
  }
}
