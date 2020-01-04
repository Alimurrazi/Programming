#include<stdio.h>
#include<math.h>

int main()
{
    long long i,j,k,l,m,t,a;
    double n;
    scanf("%lld",&t);
    while(t--)
    {
     scanf("%lld",&a);
     n=(-1+sqrt(1+8*a))/2;
     n=floor(n);
     printf("%0.lf\n",n);
    }
}
