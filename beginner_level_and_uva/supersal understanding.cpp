#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int dp[1005][40];
int weight[1005];
int cost[1005];
int n,cap;

int funct(int i,int w)
{
 int profit1=0;
 int profit2=0;
 if(i==n+1)
 return 0;
 if(dp[i][w]!=-1)
 return dp[i][w];
 if(w+weight[i]<=cap)
 profit1=cost[i]+funct(i+1,w+weight[i]);
 profit2=funct(i+1,w);
 dp[i][w]=max(profit1,profit2);
 return dp[i][w];
}

int main()
{
 int i,j,k,l,m,t,g,p,w;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%d",&n);
  memset(dp,-1,sizeof(dp));
  for(i=1;i<=n;i++)
  {
  scanf("%d%d",&p,&w);
  cost[i]=p;
  weight[i]=w;
  }
  k=0;
  scanf("%d",&g);
  for(i=1;i<=g;i++)
  {
    memset(dp,-1,sizeof(dp));
   scanf("%d",&cap);
   k=k+funct(1,0);
  }
  printf("%d\n",k);
 }
}
