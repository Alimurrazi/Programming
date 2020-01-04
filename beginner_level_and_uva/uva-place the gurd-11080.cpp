#include<stdio.h>
#include<string.h>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

vector<int>edge[210];
bool scheck[210][10005];
bool jcheck[210];
int junct,street;

void bipartic()
{
 int ara[210];
 int i,j,k,l,u;
 for(i=0;i<junct;i++)
 {
  ara[i]=edge[i].size();
 }
 sort(ara,ara+i);
 queue<int>q;
 for(i=0;i<junct;i++)
 {
  q.push(ara[i]);
 }
 k=0;
 while(!q.empty())
 {
   u=q.front();
   q.pop();
   l=0;
   for(i=0;i<edge[u].size();i++)
   {
     if(scheck[u][edge[u][i]]==false &&  scheck[edge[u][i]][u]==false)
     {
     scheck[u][edge[u][i]]=true;
     scheck[edge[u][i]][u]=true;
     printf("scheck=%d %d\n",u,edge[u][i]);
     l++;
     }
     printf("jcheck=%d\n",edge[u][i]);
   }
   if(l==edge[u].size())
    k++;
 }
 l=0;
 for(i=0;i<junct;i++)
 {
  for(j=0;j<edge[i].size();j++)
  {
    u=edge[i][j];
    if(scheck[i][u]==false)
    {
      printf("%d %d\n",i,j);
      printf("-1\n");
      l=1;
      break;
    }
  }
  if(l==1)
    break;
 }
 if(l==0)
  printf("%d\n",k);
}

int main()
{
 int i,j,k,l,m,n,test,u,v;
 scanf("%d",&test);
 while(test--)
 {
   scanf("%d%d",&junct,&street);
   for(i=0;i<street;i++)
   {
     scanf("%d%d",&u,&v);
     edge[u].push_back(v);
     edge[v].push_back(u);
   }
  memset(jcheck,false,sizeof(jcheck));
  memset(scheck,false,sizeof(scheck));
  bipartic();
  for(i=0;i<junct;i++)
  {
    edge[i].clear();
  }
 }
}
