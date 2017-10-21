#include<stdio.h>
int main()
{
    int ara[100];
    int i,j,t,n,k,l;
    int ret1,ret2,sum1,sum2;
    scanf("%d",&t);
    for(l=1; l<=t; l++)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
            scanf("%d",&ara[i]);
        ret1=0,ret2=0;
        for(i=0; i<n; i++)
        {
            k=ara[i]/30;
            k=(k+1)*10;
            ret1=ret1+k;
        }
        for(i=0; i<n; i++)
        {
            k=ara[i]/60;
            k=(k+1)*15;
            ret2=ret2+k;
        }
        if(ret1<ret2)
            printf("Case %d: Mile %d\n",l,ret1);
        if(ret2<ret1)
            printf("Case %d: Juice %d\n",l,ret2);
        if(ret1==ret2)
            printf("Case %d: Mile Juice %d\n",l,ret1);
    }
}
