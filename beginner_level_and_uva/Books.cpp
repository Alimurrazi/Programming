#include<stdio.h>
#include<algorithm>
using namespace std;

long long ara[100005],ara1[100005];
long long n,t;
long long bs(long long i)
{
    long long low=i,mid,high=n,value,k=ara1[i-1];
    while(low<=high)
    {
        mid=(low+high)/2;
        value=ara1[mid]-k;
        if(t>=value)
            low=mid+1;
        else
            high=mid-1;
    }
    return (low-i);
}

int main()
{

    long long i,j,k,l,m,ans;
    ara1[0]=0;
    while(scanf("%lld%lld",&n,&t)==2)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&ara[i]);
            ara1[i]=ara1[i-1]+ara[i];
        }
        ans=0;
        for(i=1; i<=n; i++)
        {
            ans=max(ans,bs(i));
        }
        printf("%lld\n",ans);
    }
}
