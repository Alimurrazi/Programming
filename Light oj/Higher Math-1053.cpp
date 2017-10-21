#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    long long ara[10];
    long long i,j,k,l,m,n,t;
    scanf("%lld",&t);
    for(l=1; l<=t; l++)
    {
        scanf("%lld%lld%lld",&ara[0],&ara[1],&ara[2]);
        sort(ara,ara+3);
        if((ara[2]*ara[2])==((ara[1]*ara[1])+(ara[0]*ara[0])))
            printf("Case %lld: yes\n",l);
        else
            printf("Case %lld: no\n",l);
    }
}
