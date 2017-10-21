#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t;
    int ara[1000];
    int ma=0;
    while(scanf("%d%d",&n,&m)==2)
    {
        if(ma==1)
            printf("\n");
        ma=1;
        memset(ara,0,sizeof(ara));
        int mac=0;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                ara[i+j]++;
                if(ara[i+j]>mac)
                    mac=ara[i+j];
            }
        }
        for(i=1; i<=m+n; i++)
        {
            if(ara[i]==mac)
                printf("%d\n",i);
        }
    }
}

