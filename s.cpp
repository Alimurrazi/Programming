#include<stdio.h>

long long int funct(int n)
{
    if(n<6)
        return n;
    else
        return funct(n/2)+funct(n/3)+funct(n/4);
}

int main()
{
    long long i,j,k,l,m,n;
    while(scanf("%lld",&m)==1)
    {
        printf("%lld\n",funct(m));
    }
}
