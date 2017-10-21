#include<stdio.h>
#include<string.h>
#include<math.h>

long long i,j,k,l;
bool check[776000];

void sieve()
{
    l=sqrt(k);
    for(i=4; i<=k; i=i+2)
        check[i]=false;
    for(i=3; i<=l; i=i+2)
    {
        for(j=i*2; j<=k; j=j+i)
            check[j]=false;
    }
}

int main()
{
    long long big=600851475143;
    k=sqrt(big);
    memset(check,true,sizeof(check));
    sieve();
    long long high=0;
    while(big!=1)
    {
        for(i=2; i<=big; i++)
        {
            if(check[i]==true && (big%i)==0)
            {
                printf("i==%lld\n",i);
                if(i>high)
                    high=i;
                big=big/i;
                break;
            }
        }
    }
    printf("%lld\n",high);
}
