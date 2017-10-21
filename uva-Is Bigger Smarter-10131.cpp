#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

int dp[1005][1005];
int w[1005];
int s[1005];
int n;

int lcis(int i,int j)
{
    int k,l,ans,ret1,ret2;
    if(i>=n || j>=n)
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    ans=0;
    if((w[i]<=w[j]) && (s[i]>=s[j]))
    {
        ans=1+lcis(i,j+1);
   //     ans=1+lcis(i-1);
    }
    else
    {
        //ret2=0;
        ret1=lcis(i,j+1);
        ret2=lcis(i+1,j+2);
        ans=max(ret1,ret2);
    }
    return dp[i][j]=ans;
}

int printlcis(int i,int j)
{
    if(i>=n || j>=n)
    return 0;
    if((w[i]<=w[j]) && (s[i]>=s[j]))
    {
    printf("%d\n",i+1);
    printlcis(i,j+1);
    }
    else
    {
     if(dp[i][j+1]>dp[i+1][j+2])
     return printlcis(i,j+1);
     return printlcis(i+1,j+2);
    }
}

int main()
{
    int i,j,k,l,m;
    i=0;
    while(scanf("%d%d",&w[i],&s[i])==2)
    {
        i++;
    }
    n=i;
    memset(dp,-1,sizeof(dp));
    k=lcis(0,1);
    printf("%d\n",k);
    printlcis(0,1);
}
