#include<stdio.h>
int main()
{
    long long i,j,k,l,m,n,t,ans,d,a,b;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&n);
        ans=0,a=0,b=2,d=2;
        for(j=1; j<=n; j++)
        {
            ans=ans%1000000007+b%1000000007;
            d=d+2;
            b=b+d;
        }
        ans=ans%1000000007;
        printf("Case %lld: %lld\n",i,ans);
    }
}
