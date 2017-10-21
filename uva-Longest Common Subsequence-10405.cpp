#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

char s1[1005];
char s2[1005];
int dp[1005][1005];
int ans=0;

int lcs(int i,int j)
{
    int k,l,ret1,ret2;
    if(s1[i]=='\0' || s2[j]=='\0')
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    ans=0;
    if(s1[i]==s2[j])
    {
     ans=1+lcs(i+1,j+1);
    }
    else
    {
     ret1=lcs(i+1,j);
     ret2=lcs(i,j+1);
     ans=max(ret1,ret2);
    }
    return dp[i][j]=ans;
}

int main()
{
    int i,j,k,l,m,n;
    while(gets(s1))
    {
     gets(s2);
     memset(dp,-1,sizeof(dp));
     printf("%d\n",lcs(0,0));
    }
}
