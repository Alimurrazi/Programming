#include<stdio.h>
unsigned long long ara[5000005];

int main()
{
    unsigned long long i,j,k,l,m,n,q,c,t,a,b;
    for(i=2; i<=5000001; i++)
    {
        ara[i]=i;
    }
    ara[1]=1;
    n=5000001;
    for(i=2; i<=n; i++)
    {
        if(ara[i]==i)
        {
            ara[i]=ara[i]-1;
            for(j=i*2; j<=n; j=j+i)
            {
                ara[j]=(ara[j]/i)*(i-1);
            }
        }

        ara[i]=ara[i-1]+(ara[i]*ara[i]);
    }
    scanf("%llu",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%llu%llu",&a,&b);
        k=ara[b]-ara[a-1];
        printf("Case %llu: %llu\n",i,k);
    }
}
