#include<stdio.h>
int main()
{
    unsigned long long i,j,k,l,m,n,t,w;
    scanf("%llu",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&w);
        if(w%2!=0)
        {
            printf("Case %llu: Impossible\n",i);
            continue;
        }
        else
        {
            m=w/2;
            for(j=2; j<=m; j=j+2)
            {
                if(w%j==0)
                {
                    k=w/j;
                    if(k%2==1)
                    {
                        printf("Case %llu: %llu %llu\n",i,k,j);
                        break;
                    }
                }
            }
        }
    }
}
