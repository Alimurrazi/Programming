#include<stdio.h>
#include<math.h>

int main()
{
    long long i,j,l,m,n,t,b,a,c,d,e,f,g,t;
    double k;
    while(scanf("%lld%lld",&n,&b)==2)
    {
        k=(n*1.0)/(b*1.0);
        l=fabs(k);
        if(k!=l)
            l=l+1;
        long long mini=0;
        a=0,c=0,f=0,j=0;
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&m);
            a=a+m;
            j++;
            if(j==l)
            {

            }
            if(c<b)
            {
                f=f+m;
                a++;
                if(a==l)
                {
                    if(f>mini)
                        mini=f;
                    c++;
                    a=0;
                }
            }
            else
            {
                if(m>mini)
                    mini=m;
            }
        }
        printf("%lld\n",mini);
    }
}
