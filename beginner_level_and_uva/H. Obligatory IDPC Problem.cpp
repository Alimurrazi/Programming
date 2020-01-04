#include<stdio.h>

int main()
{
    int dp[100];
    int i,j,k,l,m,n,t;
    dp[0]=1;
    for(i=1; i<=10; i++)
    {
        dp[i]=dp[i-1]*i;
    }
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        m=1;
        for(j=1; j<=n; j++)
        {
            m=m*dp[2];
        }
        k=dp[n*2]/m;
        printf("%d\n",k);
    }
}
