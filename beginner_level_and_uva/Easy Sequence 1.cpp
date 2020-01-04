#include<stdio.h>
#include<map>
using namespace std;

map<long long,long long>q;
map<long long,long long>w;

void check()
{
    long long i,j,k,l,m,n,t;
    for(i=1; ; i++)
    {
        m=q[i]*q[i]+1;
        if(m>1000000000)
            break;
        q[2*i]=m;
        w[m]=2*i;
        m=q[i]*q[i+1]+2;
        if(m>1000000000)
            break;
        q[2*i+1]=m;
        w[m]=2*i+1;
    }
}

int main()
{
    q[1]=1;
    w[1]=1;
    check();
    long long i,j,k,l,m,n,t;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&n);
        k=w[n];
        printf("Case %lld: %lld\n",i,k);
    }
}
