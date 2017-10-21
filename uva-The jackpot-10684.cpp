#include<stdio.h>
int main()
{
    int ara[10005];
    int i,j,k,l,m,n,t;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
        }
        m=-1;
        for(i=1; i<=n; i++)
        {
            k=0;
            if(ara[i]>=0)
            {
                for(j=i; j<=n; j++)
                {
                    k=k+ara[j];
                    if(k>m)
                        m=k;
                }
            }
        }
        if(m<=0)
            printf("Losing streak.\n");
        else
            printf("The maximum winning streak is %d.\n",m);
    }
}
