#include<stdio.h>
#include<math.h>

int main()
{
    long long ara[100005];
    long long i,j,k,l,m,n,t;
    long long a,b;
    double c;
    while(scanf("%lld%lld",&n,&k)==2)
    {
        for(i=1; i<=n; i++)
            scanf("%lld",&ara[i]);
        c=-1.0+sqrt(1.0+4.0*(2.0*k*1.0));
        c=c/2.0;
        a=c;
        if(a==c)
            printf("%lld\n",ara[a]);
        else
        {
            a=(a*(a+1.0))/2.0;
            m=k-a;
            printf("%lld\n",ara[m]);
        }
    }
}
