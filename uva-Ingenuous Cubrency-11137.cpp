#include<stdio.h>
#include<vector>
#include<string.h>
using namespace std;

vector<long long>all;
vector<long long>specific;
long long money;
long long dp[23][10005];

long long coin(long long i,long long w)
{
    long long ret1,ret2;
    if(dp[i][w]!=-1)
        return dp[i][w];
    if(i==specific.size())
    {
        if(w==money)
            return 1;
        return 0;
    }
    ret1=0;
    if((w+specific[i])<=money)
        ret1=coin(i,w+specific[i]);
    ret2=coin(i+1,w);
    return dp[i][w]=ret1+ret2;
}

int main()
{
    long long i,j,k,l,m,n;
    for(i=1; i<=22; i++)
        all.push_back(i*i*i);
    while(scanf("%lld",&money)!=EOF)
    {
        for(i=0; ; i++)
        {
            if(all[i]>money)
                break;
            specific.push_back(all[i]);
        }
        memset(dp,-1,sizeof(dp));
        k=coin(0,0);
        printf("%lld\n",k);
        specific.clear();
    }
}
