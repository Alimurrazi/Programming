#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>
using namespace std;

vector<int>edge[100];
int start,value;

void bfs(int start,int value)
{
 int ara[100],check[100];
 memset(ara,0,sizeof(ara));
 int u,a,i,j,p,q,v,c,d,f,l,m;
 u=start;
 a=value;
 d=0;
 l=0;

 for(i=0;i<edge[start].size();i++)
 {
  value=a;
  value=value-1;
  v=edge[u][i];
  p=v;
  ara[v]=1;
  check[l++]=v;
  printf("v==%d ",v);

  if(value>0)
  {
   for(j=0;j<edge[v].size();j++)
   {
     q=edge[v][j];
     f=0;
     for(m=0;m<l;m++)
     {
     if(q==check[m])
     {
      f=1;
     continue;
     }
     }
     if(f==1)
     continue;
     //if(q==start)
    // continue;
     value=value-1;
     ara[q]=1;
     check[l++]=q;
     printf("q==%d ",q);
    // if(value==0 && j==(edge[v].size())-1)
    if(value==0 && j==(edge[v].size())-1 )
     {
       v=p;
       value=a-1;
       j=c;
       d=0;
       continue;
     }
     if(value==0 && j!=(edge[v].size())-1 )
     {
       value=a-2;
      // j=0;
       continue;
     }
     d++;
     if(d==1)
     c=j;
     v=q;
     j=0;
   }
  }
 }
// for(i=0;i<100;i++)
 {
 // if(ara[i]==1)
 //   printf("%d ",i);
 }
}

int main()
{
 int i,j,k,l,m,n,x,y;
 while(scanf("%d",&n)==1)
 {
  for(i=0;i<n;i++)
  {
   scanf("%d%d",&x,&y);
   edge[x].push_back(y);
   edge[y].push_back(x);
  }
  scanf("%d%d",&start,&value);
  bfs(start,value);
 }
}
