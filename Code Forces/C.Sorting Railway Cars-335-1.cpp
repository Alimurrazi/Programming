#include<stdio.h>
int main()
{
    int ara[100005];
    int pos[100005];
    int i,j,k,l,m,n,high;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
            pos[ara[i]]=0;
        }
        high=0;
        for(i=1; i<=n; i++)
        {
            pos[ara[i]]=pos[ara[i]-1]+1;
            if(pos[ara[i]]>high)
                high=pos[ara[i]];
        }
        printf("%d\n",n-high);
    }
}
