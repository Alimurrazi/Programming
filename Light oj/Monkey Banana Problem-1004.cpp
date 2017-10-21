#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

int dp[205][205];
int ara[205][205];
int n;

int funct(int i,int j)
{
    int r1=0,r2=0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    if(i==(n*2) || j>n || ara[i][j]==-1)
        return 0;
    if(ara[i][j]!=-1 && i<n)
    {
        r1=ara[i][j]+funct(i+1,j);
        r2=ara[i][j]+funct(i+1,j+1);
    }
    else if(ara[i][j]!=-1 && i>=n)
    {
        r1=ara[i][j]+funct(i+1,j);
        r2=ara[i][j]+funct(i+1,j-1);
    }
    return dp[i][j]=max(r1,r2);
}

int main()
{
    int i,j,k,l,m,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        memset(dp,-1,sizeof(dp));
        memset(ara,-1,sizeof(ara));
        scanf("%d",&n);
        for(j=1; j<=n; j++)
        {
            for(l=1; l<=j; l++)
            {
                scanf("%d",&ara[j][l]);
            }
        }
        k=n-1;
        for(j=n+1; j<(2*n); j++)
        {
            for(l=1; l<=k; l++)
            {
                scanf("%d",&ara[j][l]);
            }
            k=k-1;
        }
        k=funct(1,1);
        printf("Case %d: %d\n",i,k);
    }
}
