#include<stdio.h>
#include<string.h>

bool check[150000005];
bool check1[150000005];
int n;
int ara[10005];

void funct(int i,int sum)
{
    int ret1,ret2;
    if(i==n)
    return 0;
    if(sum>=n && sum%n==0)
    return 1;

}

int main()
{
    int i,j,k,l,m;
    while(scanf("%d",&n)==1)
    {
     memset(check,false,sizeof(check));
     memset(check1,false,sizeof(check1));
     funct(0,0);
     return 0;
    }
}
