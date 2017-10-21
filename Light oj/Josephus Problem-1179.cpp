#include<stdio.h>
#include<string.h>

int dp[100005];

long long funct(long long n,long long k)
{
    if(dp[n]!=-1)
        return dp[n];
    if(n==1)
        return 1;
    return dp[n]=((funct(n-1,k)+k-1)%n)+1;
}

int main()
{
    long long i,j,k,l,m,n,t;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        memset(dp,-1,sizeof(dp));
        scanf("%lld%lld",&n,&k);
        m=funct(n,k);
        printf("%lld\n",m);
    }
}
