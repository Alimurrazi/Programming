#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int dp[10][1010];
int cap;
int coin[101];

int funct(int i,int w)
{
 int r1=0;
 int r2=0;
 if(i>=5)
 {
  if(w==cap)
  return 1;
  else
  return 0;
 }
 if(dp[i][w]!=-1)
 return dp[i][w];
 if((w+coin[i])<=cap)
 r1=funct(i,w+coin[i]);
 r2=funct(i+1,w);
 return dp[i][w]=r1+r2;
}

int main()
{
  int i,j,k,l,m,n;
  coin[1]=50;
  coin[2]=25;
  coin[3]=10;
  coin[4]=5;
  coin[5]=1;
  while(scanf("%d",&cap)==1)
  {
   memset(dp,-1,sizeof(dp));
   printf("%d\n",funct(1,0));
  }
}
