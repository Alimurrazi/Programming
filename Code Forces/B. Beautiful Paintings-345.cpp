#include<stdio.h>
#include<string.h>

int main()
{
    int ara[1005];
    int i,j,k,l,m,n,t,p,ans;
    while(scanf("%d",&n)==1)
    {
        memset(ara,0,sizeof(ara));
        p=0;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&m);
            ara[m]++;
            if(ara[m]>p)
                p=ara[m];
        }
        printf("%d\n",n-p);
    }
}
