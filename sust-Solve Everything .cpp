#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        k=0;
        for(j=0; j<13; j++)
        {
            scanf("%d",&n);
            if(n==0)
                k=1;
        }
        if(k==0)
            printf("Set #%d: Yes\n",i);
        else
            printf("Set #%d: No\n",i);
    }
}
