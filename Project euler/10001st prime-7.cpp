#include<stdio.h>
int main()
{
    long long i,j,k,l,m,n;
    l=1;
    for(i=3; ; i=i+2)
    {
        k=0;
        for(j=2; j*j<=i; j++)
        {
            if((i%j)==0)
            {
                k=1;
                break;
            }
        }
        if(k==0)
        {
            l=l+1;
            if(l<200)
            printf("%lld\n",i);
        }
        if(l==10001)
        {
            printf("%lld\n",i);
            break;
        }
    }
}
