#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

int dp[25][25];
int ara1[25];
int ara2[25];
int ara3[25];
int ara4[25];
int n;

int lcs(int i,int j)
{
    int ans=0,ret1,ret2;
    if(i>n || j>n)
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    if(ara3[i]==ara4[j])
        ans=1+lcs(i+1,j+1);
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
    char str1[200];
    char str2[200];
    int i,j,k,l,m,temp;
    scanf("%d%*c",&n);
    gets(str1);
    m=0,i=0,j=1;
    while(str1[i])
    {
        if(str1[i]==' ')
        {
            ara1[j++]=m;
            m=0;
            i++;
            continue;
        }
        if(str1[i+1]=='\0')
        {
            m=m*10+str1[i]-'0';
            ara1[j++]=m;
            i++;
            continue;
        }
        m=m*10+str1[i]-'0';
        i++;
    }
    for(i=1; i<=n; i++)
    {
        k=ara1[i];
        ara3[k]=i;
    }
    while(gets(str2))
    {
        m=0,i=0,j=1;
        while(str2[i])
        {
            if(str2[i]==' ')
            {
                ara2[j++]=m;
                m=0;
                i++;
                continue;
            }
            if(str2[i+1]=='\0')
            {
                m=m*10+str2[i]-'0';
                ara2[j++]=m;
                i++;
                continue;
            }
            m=m*10+str2[i]-'0';
            i++;
        }
        for(i=1; i<=n; i++)
        {
            k=ara2[i];
            ara4[k]=i;
        }
        memset(dp,-1,sizeof(dp));
        printf("%d\n",lcs(1,1));
    }
}
