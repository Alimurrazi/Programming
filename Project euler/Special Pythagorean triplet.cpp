#include<stdio.h>
#include<math.h>

int main()
{
    long long i,j,l,n,a,b,c;
    double k,m;
    for(i=1; ; i++)
    {
        for(j=i+1; ; j++)
        {
            k=i*i+j*j;
            m=sqrt(k);
            n=m;
            if((i+j+n)>1000)
                break;
            if((n*n)==k)
            {
                c=n;
                if((i+j+c)==1000)
                {
                    printf("%lld %lld %lld\n",i,j,c);
                }
            }
        }
    }
}
