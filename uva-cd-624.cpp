#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

int ara[100];
int money,n;
int dp[25][10000];
int direct[25][10000];

int call(int i,int w)
{
    int j,k,l,val1,val2;
    if(dp[i][w]!=-1)
        return dp[i][w];
    if(i==n)
        return 0;
    if((w+ara[i])<=money)
    {
        val1=ara[i]+call(i+1,w+ara[i]);
    }
    else
        val1=0;
    val2=call(i+1,w);
    if(val1>val2)
    {
        direct[i][w]=1;
        return dp[i][w]=val1;
    }
    else
    {
        direct[i][w]=2;
        return dp[i][w]=val2;
    }
}

void print(int i,int w)
{
    if(direct[i][w]==-1)
        return ;
    if(direct[i][w]==1)
    {
        printf("%d ",ara[i]);
        print(i+1,w+ara[i]);
    }
    if(direct[i][w]==2)
    {
        print(i+1,w);
    }
}

int main()
{
    int i,j,k,l,m;
    while(scanf("%d%d",&money,&n)==2)
    {
        for(i=0; i<n; i++)
            scanf("%d",&ara[i]);
        memset(dp,-1,sizeof(dp));
        memset(direct,-1,sizeof(direct));
        k=call(0,0);
        print(0,0);
        printf("sum:%d\n",k);
    }
}
