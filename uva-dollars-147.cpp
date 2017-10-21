#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int ara[]={10000,5000,2000,1000,500,200,100,50,20,10,5};
 long long money;
 long long dp[11][30002];

long long funct(int i,long long w)
{
 long long r1=0,r2=0;
 if(i>=11)
 {
  if(w==0)
  return 1;
  else
  return 0;
 }
 if(dp[i][w]!=-1)
 return dp[i][w];
 if((w-ara[i])>=0)
 r1=funct(i,w-ara[i]);
 r2=funct(i+1,w);
 return dp[i][w]=r1+r2;
}

int main()
{
 long long i,j,k,l,n,a,b;
 memset(dp,-1,sizeof(dp));
 while(1)
 {
 scanf("%lld.%lld",&a,&b);
 money=a*100+b;
 if(money==0)
  return 0;
 k=funct(0,money);
  printf("%3lld.%.2lld%17lld\n",a,b,k);
 }
}
