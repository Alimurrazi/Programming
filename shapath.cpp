#include<bits/stdc++.h>
using namespace std;
long q[100004],p[100004];

long ce(long n,long k)
{
    long r=n/k;
    if(n%k)
        r++;
    return r;
}

int main()
{
    double s,d,f;
    long int a,z,x,c,v,b,n,m,k;
    while(scanf("%ld%ld",&n,&k)==2)
    {
        for(int i=0; i<n/k; i++)
        {
            scanf("%ld",&q[i]);
        }
        for(int i=0; i<n/k; i++)
        {
            scanf("%ld",&p[i]);
        }
        b=1;
        for(int i=0; i<(int)n/k; i++)
        {
            s=pow(10.0,double(k));
            cout<<s;
            z=ce((long)s,q[i]);
            d=((double)p[i]*pow(10.0,((double)(k-1))));
            f=((double)(p[i]+1)*pow(10.0,((double)(k-1))));
            x=ce((long)f,q[i]);
            c=ce((long)d,q[i]);
            v=x-c;
            z=z-v;
            b=((b%1000000007)*(z%1000000007))%1000000007;
        }

        printf("%ld\n",b);


    }
}
