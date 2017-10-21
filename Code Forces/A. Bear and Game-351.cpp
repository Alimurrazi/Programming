#include<stdio.h>
int main()
{
    int ara[100];
    int i,j,k,l,m,n,a,b,c,d;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
            scanf("%d",&ara[i]);
        ara[i]=91;
        n=n+1;
        a=0;
        for(i=1; i<=n; i++)
        {
            b=ara[i];
            c=ara[i]-a-1;
            //       printf("c===%d\n",c);
            if(c>=15)
                break;
            a=ara[i];
        }
        if(i>n)
            k=90;
        else
            k=a+15;
        printf("%d\n",k);
    }
}
