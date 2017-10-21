#include<stdio.h>
int main()
{
    int ara[100005];
    int i,j,k,l,m,n,t,h,d;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            scanf("%d",&ara[j]);
        }
        m=ara[n];
        h=ara[n-1];
        d=h-m;
   //     printf("k==%d\n",d);
        for(j=n-1;j>=1;j--)
        {
         if((j-1)<1)
                break;
         if(ara[j]<m)
            m=ara[j];
         if((ara[j-1]-m)>d)
            d=ara[j-1]-m;
        }
        printf("%d\n",d);
    }
}
