#include<stdio.h>
#include<string.h>

int main()
{
    int edge[100],edge1[100],cost[100],d[100];
    int n,nedge,u,v,i,j;
    bool update=false;
    bool negative=false;
    while(scanf("%d%d",&n,&nedge)==2)
    {
        for(i=1; i<=n; i++)
            d[i]=10000000;
        for(i=0; i<nedge; i++)
            scanf("%d%d%d",&edge[i],&edge1[i],&cost[i]);
        d[1]=0;
        negative=false;
        for(j=1; j<=n; j++)
        {
            update=false;
            for(i=0; i<nedge; i++)
            {
                u=edge[i],v=edge1[i];
                if((d[u]+cost[i])<d[v])
                {
                    if(j==n)
                        negative=true;
                    d[v]=d[u]+cost[i];
                    update=true;
                }
            }
            if(update==false)
                break;
        }
        if(negative==true)
            printf("Negative cycle found\n");
        else
            printf("No negative cycle found\n");
    }
}
