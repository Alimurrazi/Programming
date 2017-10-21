#include<stdio.h>
#include<string.h>
long long dp[30005];

int main()
{
    long long ara[]= {1,5,10,25,50};
    long long i,j,k,l,money;
    while(scanf("%lld",&money)==1)
    {
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(i=0; i<5; i++)
        {
            for(j=ara[i]; j<=money; j++)
            {
                dp[j]+=dp[j-ara[i]];
            }
        }
        if(dp[money]==1)
            printf("There is only %lld way to produce %lld cents change.\n",dp[money],money);
        else
            printf("There are %lld ways to produce %lld cents change.\n",dp[money],money);
    }
}
