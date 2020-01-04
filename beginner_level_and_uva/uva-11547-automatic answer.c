#include<stdio.h>
#include<math.h>
int main()
{
    long long n,k,m,l,i,t;
    int rem;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        n=n*567;
        n=n/9;
        n=n+7492;
        n=n*235;
        n=n/47;
        n=n-498;
        n=fabs(n);
        for(i=0; i<2; i++)
        {
            rem=n%10;
            n=n/10;
        }
        printf("%d\n",rem);
    }
    return 0;
}
