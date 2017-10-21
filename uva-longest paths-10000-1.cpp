#include<stdio.h>

int node,edge;
struct cesar
{
  int u;
  int v;
};

void longest(int start)
{
  int i,j,k,l,m,n;
  int d[110];
  for(i=1;i<=node;i++)
  d[i]=0;

}

int main()
{
  struct cesar path[10000];
  int i,j,k,l,m,n,start;
  while(scanf("%d",&node)==1)
  {
    scanf("%d",&start);
    l=0;
    while(1)
    {
     scanf("%d%d",&i,&j);
     if(i==0 && j==0)
     break;
     path[l].u=i;
     path[l].v=j;
     l++;
    }
    edge=l;
   longest(start);
  }
}
