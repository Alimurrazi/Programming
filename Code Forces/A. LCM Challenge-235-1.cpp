#include<stdio.h>
int main()
{
    unsigned long long i,j,k,l,m,n,t,a,b,c;
    while(scanf("%llu",&n)==1)
    {
        if(n==1 || n==2)
            k=n;
        else
        {
            if(n%2!=0)
                k=n*(n-2)*(n-1);
            else
            {
                if(n%3!=0)
                {
                    k=(n-3)*(n-1)*(n);
                }
                else
                {
                    n=n-1;
                    k=n*(n-2)*(n-1);
                }
            }
        }
        printf("%llu\n",k);
    }
}
