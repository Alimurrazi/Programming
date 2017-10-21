#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    long long i,j,k,l,m,n,o,p,q,r,s,t;
    while(scanf("%lld%lld",&m,&n)==2)
    {
        if(m>n)
            swap(m,n);
        long long coun=0;
        for(i=1; i<=m; i++)
        {
            // k=i/5;
            r=i%5;
            k=5-r;
            if(k<=n)
            {
                coun++;
                p=(n-k)/5;
                coun=coun+p;
            }
        }
        printf("%lld\n",coun);
    }
}
