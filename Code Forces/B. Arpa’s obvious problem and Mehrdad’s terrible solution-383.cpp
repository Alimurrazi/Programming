#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n,a,b,x;
    while(scanf("%d%d",&n,&x)==2)
    {
        int ara[1000005];
        int ara1[1000005];
        memset(ara,0,sizeof(ara));
        memset(ara1,0,sizeof(ara1));
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
            ara1[ara[i]]++;
        }
        long long tot=0;
        for(i=1; i<=n; i++)
        {
            k=x^ara[i];
       //     if(k<=100000)
            tot=tot+ara1[k];
        }
        tot=tot/2;
        printf("%lld\n",tot);
    }
}
