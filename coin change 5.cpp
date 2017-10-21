#include<stdio.h>
#include<string.h>

int ara[100]= {1,2,5};
int ara1[100];
int check[100];
int dp[100][100];


int make=5;

int funct(int i,int amount)
{
    int num;
    if(i>=3)
    {
        if(amount==0)
            return 1;
        else
            return 0;
    }
    int ret1=0,ret2=0;
    if(dp[i][amount]!=-1)
        return dp[i][amount];
    num=ara[i];
    if((amount-ara[i])>=0)
    {
        if(check[num]<=ara1[num])
        {
            check[num]++;
            ret1=funct(i,amount-ara[i]);
        }
    }
    ret2=funct(i+1,amount);
    return dp[i][amount]=ret1+ret2;
}

int main()
{
    int i,j,k,l,m,n;
    ara1[1]=3;
    ara1[2]=2;
    ara1[5]=1;
    memset(dp,-1,sizeof(dp));
    memset(check,0,sizeof(check));
    k=funct(0,make);
    printf("%d\n",k);
}
