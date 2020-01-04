#include<stdio.h>
#include<string.h>

long long ara[10010];
long long a, b, c, d, e, f;

long long fn( long long n )
{
    if(ara[n]!=0)
    return ara[n];
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    ara[n]=((fn(n-1)%10000007)+(fn(n-2)%10000007)+(fn(n-3)%10000007)+(fn(n-4)%10000007)+(fn(n-5)%10000007)+(fn(n-6)%10000007))%10000007;
    return ara[n];
}

int main()
{
    long long n,i=1;
    long long cases;
    scanf("%lld",&cases);
    while(cases--)
    {
        memset(ara,0,sizeof(ara));
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %lld: %lld\n",i++,(fn(n)%10000007));
    }
    return 0;
}
