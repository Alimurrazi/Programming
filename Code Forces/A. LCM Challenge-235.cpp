#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    long long i,j,k,l,m,n,t,a,b,c;
    for(n=4; ;n++)
    {
        t=0;
     //   scanf("%lld",&n);
        for(i=1; i<=n; i++)
        {
            for(j=i; j<=n; j++)
            {
                for(l=j; l<=n; l++)
                {
                    for(m=n; ; m++)
                    {
                        if(m%i==0 && m%j==0 && m%l==0)
                        {
                            break;
                        }
                    }
                    if(m>t)
                    {
                        t=m;
                        a=i;
                        b=j;
                        c=l;
                    }
                }
            }
        }
        if(a==b || a==c || b==c)
        {
        printf("%lld %lld %lld %lld\n",t,a,b,c);
        break;
        }
        else
            printf("%lld no\n",n);
    }
    /*
        for(i=4; ;i++)
        {
            if(i%4==0 && i%3==0 && i%2==0)
            {
                printf("%lld\n",i);
                break;
            }
        }
    */
    while(scanf("%lld",&n)==1)
    {
        l=0;
        if(n<3)
            l=n;
        else
            l=n*(n-1)*(n-2);
        if(n%2==0)
            l=l/2;
        printf("%lld\n",l);
    }
}
