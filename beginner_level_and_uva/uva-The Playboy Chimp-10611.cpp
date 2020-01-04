#include<stdio.h>

long long ara[50005];

long long binary1(long long age,long long low,long long high)
{
    long long mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(ara[mid]>age)
            high=mid-1;
        else
            low=mid+1;
    }
    return ara[low];
}

long long binary2(long long age,long long low,long long high)
{
    long long mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(ara[mid]>=age)
            high=mid-1;
        else
            low=mid+1;
    }
    return ara[high];
}

int main()
{
    long long i,j,k,l,m,n,t,age,q,s;
    while(scanf("%lld",&n)==1)
    {
        for(i=1; i<=n; i++)
            scanf("%lld",&ara[i]);
        scanf("%lld",&q);
        for(i=1; i<=q; i++)
        {
            scanf("%lld",&age);
            s=binary1(age,1,n);
            l=binary2(age,1,n);
            if(l==0)
                printf("X");
            else
                printf("%lld",l);
            if(s==0)
                printf(" X\n");
            else
                printf(" %lld\n",s);
        }
    }
}
