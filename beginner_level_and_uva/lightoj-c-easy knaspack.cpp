#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int dp[2100][2100];
int ara[2100];
int big,maxi,n;

int knaspack(int i,int w)
{
    int j,k,r1,r2;
    if(i==n+1)
    return 0;
    if(dp[i][w]!=-1)
    return dp[i][w];
    if((w+ara[i])<=maxi)
    r1=w+knaspack(i+1,w+ara[i]);
    else
    r1=0;
    r2=knaspack(i+1,w);
    k=max(r1,r2);
    return dp[i][w]=k;
}

int main()
{
    int i,j,k,l,m,t;
    scanf("%d",&t);
    while(t--)
    {
        memset(ara,-1,sizeof(ara));
        scanf("%d%d",&n,&big);
        for(i=1;i<=n;i++)
        {
         scanf("%d",&ara[i]);
        }
        k=knaspack(1,0);
        printf("%d\n",k);
    }
}
