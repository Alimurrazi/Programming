#include<stdio.h>

int node,edge;
int fnode[105],snode[105],cost[105];

void bellman()
{
 int i,j,k,l,m,step;
 int d[105];
 for(i=1;i<=node;i++)
 d[i]=-99999999;
 d[1]=100;

 for(step=0;step<10000;step++)
 {
   for(i=0;i<edge;i++)
   {
     if((d[fnode[i]]+cost[i])>d[snode[i]])
      d[snode[i]]=d[fnode[i]]+cost[i];
   }
 }
 for(i=1;i<=node;i++)
 {
 //printf("%d=%d\n",i,d[i]);
 if(d[i]<=0)
 {
 printf("hopeless\n");
 break;
 }
 }
 if(i>node)
 printf("winnable\n");
}

int main()
{
  int i,j,k,l,m,n,test,energy;
  while(scanf("%d",&node)==1)
  {
    if(node==-1)
     return 0;
   l=0;
   for(i=1;i<=node;i++)
   {
    scanf("%d",&energy);
    scanf("%d",&k);
    for(j=0;j<k;j++)
    {
     scanf("%d",&snode[l]);
     fnode[l]=i;
     cost[l]=energy;
     l++;
    }
   }
   edge=l;
   bellman();
  }
}
