#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int ara[502][502];
    int i,j,k,l,m,n,p,q,t,x,y,w,f;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&n,&m);
        for(j=0; j<n; j++)
        {
            for(l=0; l<n; l++)
            {
                if(j==l)
                    ara[j][l]=0;
                else
                    ara[j][l]=1000000000;
            }
        }
        for(j=0; j<m; j++)
        {
            scanf("%d%d%d",&x,&y,&w);
            if(w<ara[x][y])
            {
                ara[x][y]=w;
                ara[y][x]=w;
            }
        }
        scanf("%d",&f);
        for(l=0; l<n; l++)
        {
            for(j=0; j<n; j++)
            {
                for(k=0; k<n; k++)
                {
                    p=max(ara[j][l],ara[l][k]);
                    if(p<ara[j][k])
                        ara[j][k]=p;
                }
            }
        }
        printf("Case %d:\n",i);
        for(j=0; j<n; j++)
        {
            if(ara[j][f]==1000000000)
                printf("Impossible\n");
            else
                printf("%d\n",ara[j][f]);
        }
    }
}
