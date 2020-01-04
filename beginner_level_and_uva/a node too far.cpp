#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>
using namespace std;
vector<int>edge[100];
int start,value;

void bfs(int start,int value)
{
 int ara[100];
 memset(ara,0,sizeof(ara));
 int u,v,i,j,k,l,d,q,a,p,c;
 u=start;
 a=value;

 for(i=0;i<edge[u].size();i++)
 {
   value=a;
   value=value-1;
   v=edge[u][i];
   p=v;
   ara[p]=1;


  if(value>0)
  {
   for(j=0;j<edge[v].size();j++)
   {
     q=edge[v][j];
     if(q==start)
     continue;
     value=value-1;
     ara[q]=1;
     if(value==0)
     {
       v=p;
       value=a-1;
       j=c;
       d=0;
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
 for(i=0;i<100;i++)
 {
  if(ara[i]==1)
    printf("%d ",i);
 }
}

int main()
{
 int x,y,i,j,k,l,m,n;
 for(i=0;i<6;i++)
 {
  scanf("%d%d",&x,&y);
  edge[x].push_back(y);
  edge[y].push_back(x);
 }
  start=35,value=4;
  bfs(start,value);

}
