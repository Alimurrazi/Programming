#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,node,edge,u,v;
    int edge1[100],edge2[100],cost[100];
    scanf("%d%d",&node,&edge);
    for(i=0; i<edge; i++)
    {
        scanf("%d%d%d",&edge1[i],&edge2[i],&cost[i]);
    }
    int d[100];
    for(i=1; i<=node; i++)
        d[i]=1000000;
    bool negative=false;
    for(i=1; i<=node; i++)
    {
        for(j=0; j<edge; j++)
        {
         u=edge1[j],v=edge2[j];
         if(d[u]+cost[i]<d[v])
         {
             if(i==node)
                negative=true;
             d[v]=d[u]+cost[i];
         }
        }
    }
    if(negative==true)
        printf("negative cycle found\n");
}
