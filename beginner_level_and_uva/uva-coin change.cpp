#include<stdio.h>
#include<string.h>

int coin[]={50,25,10,5,1};
int taka;
int dp[6][7500];

int funct(int i,int w)
{
 int r1=0,r2=0;
 if(i>=5)
 {
 if(w==0)
 return 1;
 else
 return 0;
 }
 if(dp[i][w]!=-1)
 return dp[i][w];
 if((w-coin[i])>=0)
 r1=funct(i,w-coin[i]);
 else
 r1=0;
 r2=funct(i+1,w);
 return dp[i][w]=r1+r2;
}

int main()
{
 int i,j,k,l,m,n;
 memset(dp,-1,sizeof(dp));
 while(scanf("%d",&taka)==1)
 {
 printf("%d\n",funct(0,taka));
 }
}
