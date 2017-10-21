#include<stdio.h>
int main()
{
    long long i,j,k,l,m,n,t,s;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld%lld%lld",&n,&m,&s);
        k=(s+m-1)%n;
        if(k==0)
            k=n;
        printf("%lld\n",k);
    }
}
