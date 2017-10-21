#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int dp[100][100];
int weight[100];
int cost[100];
int cap,n;

int fun(int i,int w)
{
 int profit1,profit2;
 profit1=0;
 profit2=0;
 if(i==n+1)
 return 0;
 if(dp[i][w]!=-1)
 return dp[i][w];
 if(w+weight[i]<=cap)
 profit1=cost[i]+fun(i+1,weight[i]);
 profit2=fun(i+1,w);
 dp[i][w]=max(profit1,profit2);
 return dp[i][w];
}

int main()
{
 int i,j,k,l,m;
 memset(dp,-1,sizeof(dp));
 scanf("%d%d",&n,&cap);
 for(i=1;i<=n;i++)
 scanf("%d%d",&weight[i],&cost[i]);
 printf("%d\n",fun(1,0));
}
