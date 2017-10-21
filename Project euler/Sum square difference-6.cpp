#include<stdio.h>
#include<math.h>

int main()
{
    int i;
    long long k,l,m,n;
    m=0;
    for(i=1;i<=100;i++)
    m=m+i;
    m=m*m;
    printf("%lld\n",m);
    n=0;
    for(i=1;i<=100;i++)
    {
     n=n+i*i;
    }
    printf("%lld\n",n);
    printf("dif===%lld\n",m-n);
}
