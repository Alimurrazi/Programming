#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int ara[110];
int cap,n,k;
int dp[110][25002];

int knespak(int i,int w)
{
 // printf("i=%d w=%d\n",i,w);
  int profit1=0;
  int profit2=0;
  if(i>=n)
  {
  if(w==cap)
  return 0;
  else
  return 1;
  }
  if(dp[i][w]!=-1)
  return dp[i][w];

  if(w+ara[i]<=cap)
  {
 // printf("profit1--i=%d w=%d\n",i,w);
  profit1=knespak(i,w+ara[i]);
  }
//  printf("profit2--i=%d w=%d\n",i,w);
  profit2=knespak(i+1,w);
 // printf("dp--%d %d\n",i,w);
//  printf("profit1--%d profit2--%d\n",profit1,profit2);
 // dp[i][w]=max(profit1,profit2);
 // return dp[i][w];
  return profit1+profit2;
}

int main()
{
 int i,j,k,l,m,t,sum;
 scanf("%d",&t);
 while(t--)
 {
 memset(dp,-1,sizeof(dp));
 scanf("%d",&n);
 sum=0;

 for(i=1;i<=n;i++)
 {
 scanf("%d",&ara[i]);
// sum=sum+ara[i];
 }

// cap=sum/2;
 scanf("%d",&cap);
 k=knespak(1,0);
// k=sum-(2*k);
 printf("%d\n",k);
 }
}
