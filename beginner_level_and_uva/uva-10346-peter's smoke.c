#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,b,r,m,k,sum=0;
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        sum=n;
        while(n>=k)
        {
            d=n/k;
            sum=sum+d;
            r=fmod(n,k);
            n=d+r;
        }
        printf("%d\n",sum);
    }
    return 0;
}
