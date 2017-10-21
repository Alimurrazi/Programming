#include<stdio.h>
#include<string.h>

int ara[1200];
int dp1[1200];
int dp2[1200];

int main()
{
    int i,j,k,l,m,n,t,u,v,low,high;
    bool check[1200];
    int arive[1200];
    int leave[1200];
    scanf("%d",&t);
    while(t--)
    {
        low=1000000000;
        high=0;
        scanf("%d",&n);
        memset(check,false,sizeof(check));
        memset(ara,0,sizeof(ara));
        memset(leave,0,sizeof(leave));
        memset(arive,0,sizeof(arive));
        for(i=1; i<=n; i++)
        {
            scanf("%d",&dp1[i]);
            if(dp1[i]<low)
                low=dp1[i];
            if(dp1[i]>high)
                high=dp1[i];
        }
        for(i=1; i<=n; i++)
        {
            scanf("%d",&dp2[i]);
            if(dp2[i]<low)
                low=dp2[i];
            if(dp2[i]>high)
                high=dp2[i];
        }
        /*
        for(i=1;i<=n;i++)
        {
          printf("%d %d\n",dp1[i],dp2[i]);
        }
        */
        for(i=1; i<=n; i++)
        {
            u=dp1[i];
            v=dp2[i];
            for(j=u+1; j<v; j++)
                ara[j]++;
            if(leave[u]!=1)
                ara[u]++;
            if(arive[v]!=1)
                ara[v]++;
            arive[u]=1;
            leave[v]=1;
            /*
            if(check[u]==true)
                ara[u]=ara[u]-2;
            if(check[v]==true)
                ara[v]=ara[v]-2;
            check[u]=check[v]=true;
            */
        }
        k=0;
        for(i=low; i<=high; i++)
        {
            if(ara[i]>k)
                k=ara[i];
        }
        printf("%d\n",k);
    }
}
