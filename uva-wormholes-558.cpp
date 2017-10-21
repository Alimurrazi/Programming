#include<stdio.h>
#include<string.h>

int fedge[2010],sedge[2010],cost[2010];
int node,edge;

void bellman()
{
  int i,j,k,u,v,ucost,vcost,step,dist;
  int d[2010];
  for(i=0;i<node;i++)
  d[i]=100000000;
  d[0]=0;
  for(step=0;step<node-1;step++)
  {
   for(i=0;i<edge;i++)
   {
    u=fedge[i];
    v=sedge[i];
    dist=cost[i];
    if((d[u]+dist)<d[v])
     d[v]=d[u]+dist;
   }
  }
  for(i=0;i<node;i++)
  {
    if((d[fedge[i]]+cost[i])<d[sedge[i]])
    {
     printf("possible\n");
     break;
    }
  }
  if(i==node)
   printf("not possible\n");
}

int main()
{
  int i,j,k,l,m,test;
  scanf("%d",&test);
  while(test--)
  {
   scanf("%d%d",&node,&edge);
   for(i=0;i<edge;i++)
   {
     scanf("%d%d%d",&fedge[i],&sedge[i],&cost[i]);
   }
   bellman();
  }
}
