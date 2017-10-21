#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long ara[100005];
    long long ara1[100005];
    long long i,j,k,l,m,n,t;
    while(scanf("%lld",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&ara[i]);
        }
        ara1[n]=ara[n];
        for(i=n-1; i>=1; i--)
        {
            ara1[i]=ara[i]+ara[i+1];
        }
        for(i=1; i<=n; i++)
        {
            if(i!=1)
                printf(" ");
            printf("%lld",ara1[i]);
        }
        printf("\n");
    }
}
