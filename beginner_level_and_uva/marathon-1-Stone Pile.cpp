#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;

//int dp[21][1000005];
int ara[21];
int cap,n;

int funct(int i,int w)
{
    int ret1,ret2,p;
    if(i==n)
        return 0;
  //  if(dp[i][w]!=-1)
  //      return dp[i][w];
    ret1=0;
    if((w+ara[i])<=cap)
        ret1=ara[i]+funct(i+1,w+ara[i]);
    ret2=funct(i+1,w);
    //dp[i][w]=max(ret1,ret2);
   // return dp[i][w];
   p=max(ret1,ret2);
   return p;
}

int main()
{
    int i,j,k,l2,m,l1;
    while(scanf("%d",&n)==1)
    {
        k=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&ara[i]);
            k=k+ara[i];
        }
        cap=k/2;
    //    memset(dp,-1,sizeof(dp));
        l1=funct(0,0);
        l2=k-l1;
        m=fabs(l1-l2);
        printf("%d\n",m);
    }
}
