#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,t,coun;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        coun=0;
        scanf("%d",&n);
        while(n!=0)
        {
            if((n%2)!=0)
                coun++;
            n=n/2;
        }
        if(coun%2==0)
            printf("Case %d: even\n",i);
        else
            printf("Case %d: odd\n",i);
    }
}
