#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    long long i,j,k,l,m,n,mini,p,a,b,c;
    while(scanf("%lld%lld",&n,&b)==2)
    {
        k=n-b;
        j=1;
        mini=0;
        c=0;
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&m);
            if(j<=k)
            {
                c=c+m;
                if(i%2==0)
                {
                    mini=max(mini,c);
                    c=0;
                    j++;
                }
            }
            else
                mini=max(mini,m);
        }
        printf("%lld\n",mini);
    }
}
