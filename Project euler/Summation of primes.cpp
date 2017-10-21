#include<stdio.h>
int main()
{
    long long i,j,k,l,m,n,ans=5;
    for(i=4; i<=2000000; i++)
    {
        for(j=2; j*j<=i; j++)
        {
            if(i%j==0)
                break;
        }
        if((j*j)>i)
            ans=ans+i;
    }
    printf("%lld\n",ans);
}
