#include<stdio.h>

int node=3,nedge=3;
int edge[100],edge1[100],cost[100];
void bfs()
{
  int d[100];
  int i,j,k,u,v,ucost,vcost,step,update;
  for(i=0;i<node;i++)
  d[i]=1000000;
  d[1]=0;
  int neg_cycle=false;
  for(step=1;step<=node;step++)
  {
    update=false;
   for(i=1;i<=nedge;i++)
   {
    u=edge[i];
    v=edge1[i];
    if((d[u]+cost[i])<d[v])
    {
      update=true;
      if(step==node)
       neg_cycle=true;
     d[v]=d[u]+cost[i];
    }
   }
   if(update==false)
    break;
  }
  if(neg_cycle==true)
   printf("negative\n");
}

int main()
{
  int i,j,k,l,m,n;
  for(i=1;i<=3;i++)
  scanf("%d%d%d",&edge[i],&edge1[i],&cost[i]);
  //scanf("%d",&n);
  bfs();

}
