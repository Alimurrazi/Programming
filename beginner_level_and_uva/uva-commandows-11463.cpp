#include<stdio.h>
#include<string.h>
int main()
{
    int edge[102][102];
    int t,b,r,i,j,k,l,m,n,x,y,u,v,start,finish,ca=0;
    scanf("%d",&t);
    while(t--)
    {
        ca++;
        scanf("%d",&b);
        for(i=0; i<b; i++)
        {
            for(j=0; j<b; j++)
            {
                if(i==j)
                    edge[i][j]=0;
                else
                    edge[i][j]=10000;
            }
        }
        scanf("%d",&r);
        for(i=0; i<r; i++)
        {
            scanf("%d%d",&x,&y);
            edge[x][y]=edge[y][x]=1;
        }
        for(k=0; k<b; k++)
        {
            for(i=0; i<b; i++)
            {
                for(j=0; j<b; j++)
                {
                    if((edge[i][k]+edge[k][j])<edge[i][j])
                        edge[i][j]=edge[i][k]+edge[k][j];
                }
            }
        }
        scanf("%d%d",&start,&finish);
        x=0,y=0,u=0,v=0;
        int high=0;
        for(i=0; i<b; i++)
        {
            x=edge[start][i]+edge[i][finish];
            if(x>high)
                high=x;
        }
        printf("Case %d: ",ca);
        //  if(b==2)
        //  printf("%d\n",edge[start][finish]);
        //  else
        {
            //  x=u+v;
            printf("%d\n",high);
        }
    }
}
