#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    long long i,j,k,l,m,n,t,x,y;
    double c;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&n);
        c=sqrt(n);
        k=ceil(c);
        if(k*k-n<k)
        {
            x=k;
            y=k*k-n+1;
        }
        else
        {
            x=-k*k+2*k+n-1;
            y=k;
        }
        if(k&1)
            swap(x,y);
        printf("Case %lld: %lld %lld\n",i,x,y);
    }
}
