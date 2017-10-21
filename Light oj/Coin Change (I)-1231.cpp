/*
  2
  3 1000
  2 5 100 20 20 20
*/
#include<stdio.h>
#include<string.h>

long long how;
long long temp[103];
long long ara[103];
long long dp[1002][51];

long long change(long long i,long long make,long long current)
{
    long long j,k,l,m,n,ret1=0,ret2=0;
    if(dp[make][i]!=-1)
        return dp[make][i];
    if(i>how)
    {
        if(make==0)
        {
            //   printf("%lld\n",make);
            return 1;
        }
        else
            return 0;
    }

    if((make-temp[i])>=0 && current<=ara[i])
    {
        ret1=change(i,make-temp[i],current+1)%100000007;
    }
    ret2=change(i+1,make,1)%100000007;
    dp[make][i]=((ret1+ret2)%100000007);
    return dp[make][i];
}

int main()
{
    long long i,j,k,l,m,n,t,make;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        memset(dp,-1,sizeof(dp));
        scanf("%lld%lld",&how,&make);
        for(j=1; j<=how; j++)
        {
            scanf("%lld",&temp[j]);
        }
        for(j=1; j<=how; j++)
        {
            scanf("%lld",&ara[j]);
        }
        printf("Case %lld: %lld\n",i,change(1,make,1));
    }
}
