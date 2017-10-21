#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    long long ara[20005];
    long long i,j,k,l,m,n,t,a,b;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&k);
        for(i=0; i<n; i++)
        {
            scanf("%lld",&ara[i]);
        }
        sort(ara,ara+i);
        l=2147483640;
        for(i=0; i<n; i++)
        {
            if(i+k>n)
                break;
            a=ara[i];
            b=ara[i+k-1];
            if((b-a)<l)
                l=b-a;
        }
        printf("%lld\n",l);
    }
}
