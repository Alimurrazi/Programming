#include<stdio.h>

int main()
{
    long long i,j,k,l,m,n,t;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld%lld",&n,&k);
        m=1;
        for(j=2; j<=n; j++)
        {
            m=((m+k-1)%j)+1;
        }
        printf("Case %lld: %lld\n",i,m);
    }
}
