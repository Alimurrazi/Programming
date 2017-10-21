#include<stdio.h>
#include<string.h>

int ara[51];
int ara1[51];
int dp[50][1000][20];
int n;

int funct(  int i,  int amount,  int current)
{
    if(i==n)
    {
        if(amount==0)
            return 1;
        else
            return 0;
    }
    int ret1=0,ret2=0;

    if(dp[i][amount][current]!=-1)
        return dp[i][amount][current];

    if((amount-ara[i])>=0 && (current<ara1[i]))
    {
        ret1=funct(i,amount-ara[i],current+1);
    }
    ret2=funct(i+1,amount,0);

    return dp[i][amount][current]=(ret1+ret2)%100000007;
}

int main()
{
    int i,j,k,l,make,t;
    scanf("%d",&t);
    for(j=1; j<=t; j++)
    {
        memset(dp,-1,sizeof(dp));
        scanf("%d%d",&n,&make);
        for(i=0; i<n; i++)
        {
            scanf("%d",&ara[i]);
        }
        for(i=0; i<n; i++)
        {
            scanf("%d",&ara1[i]);
        }
        k=funct(0,make,0);
        printf("Case %d: %d\n",j,k);
    }
}
