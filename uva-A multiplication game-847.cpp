#include<stdio.h>
#include<map>
#include<iostream>
using namespace std;

long long n;
map < long long ,long long > m;

long long funct(long long val)
{
    if(m[val]!=0)
        return m[val];
    if(val>=n)
        return m[val]=1;
    if(funct(val*2)==1 || funct(val*3)==1 || funct(val*4)==1 || funct(val*5)==1 || funct(val*6)==1 || funct(val*7)==1 || funct(val*8)==1 || funct(val*9)==1)
        return m[val]=2;
    return m[val]=1;
}

int main()
{
    long long  i,j,k,l;
    while(scanf("%lld",&n)==1)
    {
        k=funct(1);
        if(k==2)
            printf("Stan wins.\n");
        else
            printf("Ollie wins.\n",k);
     //   for(i=1;i<=20;i++)
     //   printf("i==%lld %lld\n",i,m[i]);
        m.clear();
    }
}
