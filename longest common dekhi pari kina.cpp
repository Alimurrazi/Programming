#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

int ara[100];
int dp[100][100];

int lcs(int i)
{
    int k,l,ans,ret1,ret2;
int    j=i+1;
    if(i==3 || j==3)
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    ans=0;
   // j=i+1;
    if(ara[i]<ara[j])
    ans=1+lcs(i+1);
    else
    {
     ret1=0;
     ret2=lcs(i+1);
     ans=max(ret1,ret2);
    }
    return dp[i][j]=ans;
}

int main()
{
    int i,j,k,l,m,n;
   // scanf("%d",&n);
    for(i=0;i<3;i++)
    {
     scanf("%d",&ara[i]);
    }
    memset(dp,-1,sizeof(dp));
    k=lcs(0);
    printf("%d\n",k);
}
