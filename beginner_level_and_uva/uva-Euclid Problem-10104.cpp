#include<stdio.h>
long long x,y,d;

void gcd(long long a,long long b)
{
    long long temp;
    if(b==0)
    {
        d=a;
        x=1;
        y=0;
        return ;
    }
    gcd(b,a%b);
    temp=x-(a/b)*y;
    x=y;
    y=temp;
}

int main()
{
    long long i,j,k,l,m,n,t,a,b;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        if(b>a)
        {
            gcd(b,a);
            printf("%lld %lld %lld\n",y,x,d);
        }
        else
        {
            gcd(a,b);
            printf("%lld %lld %lld\n",x,y,d);
        }
    }
}
