#include<stdio.h>
int main()
{
    long long i,n,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n==0)
            printf("0 ");
        if(n<0)
        {
            for(i=n; i<=0; i++)
            {
                if(i>n)
                    printf(" ");
                printf("%lld",i);
            }
            printf("\n");
        }
       else
        {
            for(i=0; i<=n; i++)
            {
                if(i>0)
                    printf(" ");
                printf("%lld",i);
            }
            printf("\n");
        }
    }
}
