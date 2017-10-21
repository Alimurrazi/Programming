#include<stdio.h>
int main()
{
    int ara[105][5];
    int i,j,k,l,m,n,a,b;
    while(scanf("%d%d",&n,&m)==2)
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=4; j++)
                ara[i][j]=0;
        }
        l=1;
        for(i=n; i>=1 ; i--)
        {
            ara[i][1]=l;
            l++;
            if(l>m)
                break;
            ara[i][4]=l;
            l++;
            if(l>m)
                break;
        }
        if(l<=m)
        {
            for(i=n; i>=1 ; i--)
            {
                ara[i][2]=l;
                l++;
                if(l>m)
                    break;
                ara[i][3]=l;
                l++;
                if(l>m)
                    break;
            }
        }
        /*
        for(i=1;i<=n;i++)
        {
         printf("%d %d %d %d\n",ara[i][1],ara[i][2],ara[i][3],ara[i][4]);
        }
        */
        l=0;
        for(i=n; i>=1; i--)
        {
            if(l!=0)
                printf(" ");
            if(ara[i][2]!=0)
            {
                if(l!=0)
                    printf(" ");
                l=1;
                printf("%d",ara[i][2]);
            }
            if(ara[i][1]!=0)
            {
                if(l!=0)
                    printf(" ");
                l=1;
                printf("%d",ara[i][1]);
            }
            if(ara[i][3]!=0)
            {
                if(l!=0)
                    printf(" ");
                l=1;
                printf("%d",ara[i][3]);
            }
            if(ara[i][4]!=0)
            {
                if(l!=0)
                    printf(" ");
                l=1;
                printf("%d",ara[i][4]);
            }
        }
        printf("\n");
    }
}
