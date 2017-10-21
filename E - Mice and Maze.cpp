#include<stdio.h>
#include<string.h>

int main()
{
    int ara[105][105];
    int i,j,k,l,m,n,t,last,x,y,z;
    while(scanf("%d",&n)==1)
    {
      //  memset(ara,1000000,sizeof(ara));
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i==j)
                    ara[i][j]=0;
                else
                ara[i][j]=100000000;
            }
        }
        scanf("%d%d%d",&last,&t,&l);
        for(j=0;j<l;j++)
        {
            scanf("%d%d%d",&x,&y,&z);
            ara[x][y]=z;
        }
        /*
        for(i=1;i<=n;i++)
        {
            printf("l====================%d\n",ara[i][last]);

        }
        */
        for(k=1;k<=n;k++)
        {
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=n;j++)
                {
                 if(ara[i][j]>(ara[i][k]+ara[k][j]))
                        ara[i][j]=ara[i][k]+ara[k][j];
                }
            }
        }
        l=0;
        for(i=1;i<=n;i++)
        {
         if(ara[i][last]<=t)
         {
          //   printf("k===%d\n",ara[i][last]);
                l++;
         }
        }
        printf("%d\n",l);
    }
}
