#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    long long m[100005],p[100005];
    long long i,j,k,l,n,t,low;
    while(scanf("%lld",&n)==1)
    {
        for(i=0; i<n; i++)
            scanf("%lld%lld",&m[i],&p[i]);
        low=100000000;
        k=0;
        for(i=0; i<n; i++)
        {
            k=min(k+m[i]*p[i],k+m[i]*low);
            if((k+m[i]*p[i])<(k+m[i]*low))
                low=p[i];
        }
        printf("%lld\n",k);
    }
}
