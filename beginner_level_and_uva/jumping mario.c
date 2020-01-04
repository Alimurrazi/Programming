#include<stdio.h>
int main()
{
    int ara[100];
    int i,j,k,l=0,t,n,h=0;
    scanf("%d",&t);
    for(j=1; j<=t; j++)
    {
        scanf("%d",&n);
        h=0,l=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&ara[i]);
        }
        for(i=0; i<n-1; i++)
        {
            if(ara[i]==ara[i+1])
                continue;
            if(ara[i]>ara[i+1])
                l++;
            else if(ara[i]<ara[i+1])
                h++;
        }
        printf("Case %d: %d %d\n",j,h,l);
    }
    return 0;
}
