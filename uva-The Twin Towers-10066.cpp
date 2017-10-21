#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

int ara1[110];
int ara2[110];
int dp[110][110];
int n1,n2;

int lcs(int i,int j)
{
    int k,l;
    int ans=0,ret1,ret2;
    if(i==n1 || j==n2)
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    if(ara1[i]==ara2[j])
    {
        ans=1+lcs(i+1,j+1);
    }
    else
    {
        ret1=lcs(i+1,j);
        ret2=lcs(i,j+1);
        ans=max(ret1,ret2);
    }
    return dp[i][j]=ans;
}

int main()
{
    int i,j,k,l,m,n;
    k=0;
    while(scanf("%d%d",&n1,&n2)==2)
    {
        k++;
        if(n1==0 && n2==0)
        return 0;
        for(i=0; i<n1; i++)
            scanf("%d",&ara1[i]);
        for(i=0; i<n2; i++)
            scanf("%d",&ara2[i]);
        memset(dp,-1,sizeof(dp));
        printf("Twin Towers #%d\n",k);
        printf("Number of Tiles : %d\n\n",lcs(0,0));
    }
}
