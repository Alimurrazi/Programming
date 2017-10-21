#include <bits/stdc++.h>
using namespace std;
int coin[55],take[55];
int dp[51][21][1001];
int n,k;

int make(int i,int cnt,int amount)
{
    if(cnt>take[i]) return 0;
    if(i>=n)
    {
        if(amount==0) return 1;
        else return 0;
    }
    if(dp[i][cnt][amount]!=-1) return dp[i][cnt][amount];
    int ret1=0, ret2=0;
    if(amount-coin[i]>=0)
        ret1=make(i,cnt+1,amount-coin[i]);
    ret2=make(i+1,0,amount);
    return dp[i][cnt][amount]=(ret1+ret2)%100000007;
}

int main()
{
    int i,j,l,ans,sum,t,i1;
    scanf("%d",&t);
    for(i1=1; i1<=t; i1++)
    {
        memset(dp,-1,sizeof(dp));
        scanf("%d%d",&n,&k);
        for(i=0; i<n; i++)
            scanf("%d",&coin[i]);
        for(i=0; i<n; i++)
            scanf("%d",&take[i]);
        ans=make(0,0,k);
        printf("Case %d: %d\n",i1,ans);
    }
    return 0;
}
