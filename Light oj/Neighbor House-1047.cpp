#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;

int ara[25][4];
int dp[25][4];
int n;

int funct(int ind,int ca)
{
    if(ind>n)
        return 0;
    if(dp[ind][ca]!=0)
        return dp[ind][ca];
    int inf=2147483646;
    if(ca!=0)
        inf=min(inf,funct(ind+1,0)+ara[ind][0]);
    if(ca!=1)
        inf=min(inf,funct(ind+1,1)+ara[ind][1]);
    if(ca!=2)
        inf=min(inf,funct(ind+1,2)+ara[ind][2]);
    return dp[ind][ca]=inf;
}

int main()
{
    int i,j,k,l,m,t,a,b,c;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        for(j=0; j<25; j++)
        {
            for(l=0; l<4; l++)
                dp[j][l]=0;
        }
        scanf("%d",&n);
        for(j=1; j<=n; j++)
        {
            scanf("%d%d%d",&ara[j][0],&ara[j][1],&ara[j][2]);
        }
        k=funct(1,-1);
        printf("Case %d: %d\n",i,k);
    }
}
