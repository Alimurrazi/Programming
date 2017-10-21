#include<stdio.h>
int main()
{
    long long i,j,k,l,m,n,t;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld%lld",&m,&n);
        k=m/2;
        k=k*n;
        printf("Case %lld: %lld\n",i,k);
    }
}
