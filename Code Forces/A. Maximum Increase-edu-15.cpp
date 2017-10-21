#include<stdio.h>
int main()
{
    int ara[100005];
    int i,j,k,l,m,n,t;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
            scanf("%d",&ara[i]);
            int coun=1;
            int m=1;
        for(i=2;i<=n;i++)
        {
         if(ara[i]>ara[i-1])
             coun++;
         else
            coun=1;
         if(coun>m)
          m=coun;
        }
         printf("%d\n",m);
    }
}
