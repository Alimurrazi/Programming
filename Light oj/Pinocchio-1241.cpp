#include<stdio.h>

int check(int f,int l)
{
    int i,j,d,k;
    d=l-f;
    k=0;
    for(i=5; i>=1; i--)
    {
        if((d/i)!=0)
        {
            k=k+(d/i);
            d=d%i;
        }
    }
    return k;
}

int main()
{
    int i,j,k,l,m,n,t,f;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        f=2,k=0;
        for(j=1; j<=n; j++)
        {
            scanf("%d",&m);
            k=k+check(f,m);
            f=m;
        }
        printf("Case %d: %d\n",i,k);
    }
}
