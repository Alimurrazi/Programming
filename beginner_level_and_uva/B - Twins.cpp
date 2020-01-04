#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;


int dp[105][15000];
int ara[105];
int cap,n;
int ko;

int call(int i,int w,int mini)
{
    printf("%d %d\n",i,w);
    if(i==n)
        return 0;
    if(dp[i][w]!=-1)
        return dp[i][w];
    int p1=0,p2=0,c1=0,c2=0;
    if((w+ara[i])>cap)
            p1=ara[i]+call(i+1,w+ara[i],mini+1);
    else
        p2=call(i+1,w,mini);
  //  ko=mini;
    return dp[i][w]=max(p1,p2);
}

int main()
{
    int i,j,k,l,m,t,s;
    while(scanf("%d",&n)==1)
    {
        s=0;
        for(i=0;i<n;i++)
        {
         scanf("%d",&ara[i]);
         s=s+ara[i];
        }
        cap=s/2;
        memset(dp,-1,sizeof(dp));
        k=call(0,0,0);
        printf("%d\n",k);
    }
}
