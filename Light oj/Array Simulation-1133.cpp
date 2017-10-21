#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<iostream>
using namespace std;

int main()
{
    long long ara[105];
    string s;
    long long i,j,k,l,m,n,t,a;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        printf("Case %d:\n",i);
        scanf("%lld%lld",&n,&m);
        for(j=0; j<n; j++)
            scanf("%lld",&ara[j]);
        for(j=0; j<m; j++)
        {
            cin>>s;
            if(s=="S")
            {
                scanf("%lld",&k);
                for(l=0; l<n; l++)
                    ara[l]=ara[l]+k;
            }
            else if(s=="M")
            {
                scanf("%lld",&k);
                for(l=0; l<n; l++)
                    ara[l]=ara[l]*k;
            }
            else if(s=="D")
            {
                scanf("%lld",&k);
                for(l=0; l<n; l++)
                    ara[l]=ara[l]/k;
            }
            else if(s=="R")
            {
                for(a=0,l=n-1; ; a++,l--)
                {
                    if(a>=l)
                        break;
                    swap(ara[a],ara[l]);
                }
            }
            else if(s=="P")
            {
                scanf("%lld%lld",&a,&k);
                swap(ara[a],ara[k]);
            }
        }
        for(j=0; j<n; j++)
        {
            if(j!=0)
                printf(" ");
            printf("%lld",ara[j]);
        }
        printf("\n");
    }
}
