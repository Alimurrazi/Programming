#include<stdio.h>
#include<string.h>

int dp[51][1001];
int coin[51];
int coun[51];
int n,k;

int change(int i,int amount)
{
    if(dp[i][amount]!=-1)
        return dp[i][amount];
    if(i>n)
    {
        if(amount==k)
            return 1;
        else
            return 0;
    }
    if(amount==k)
        return 1;
    int ret=0,j;
    for(j=1; j<=coun[i]; j++)
    {
        if((amount+coin[i]*j)<=k)
            ret=ret+change(i+1,amount+coin[i]*j);
        else
            break;
    }
    ret=ret+change(i+1,amount);
    return dp[i][amount]=ret;
}

int main()
{
    int i,j,l,m,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        memset(dp,-1,sizeof(dp));
        scanf("%d%d",&n,&k);
        for(j=1; j<=n; j++)
            scanf("%d",&coin[j]);
        for(j=1; j<=k; j++)
            scanf("%d",&coun[j]);
        m=change(1,k);
        printf("Case %d: %d\n",i,m);
    }
}
