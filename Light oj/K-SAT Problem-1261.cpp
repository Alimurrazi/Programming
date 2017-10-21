#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int ara[35][35];
    bool ans[35];
    int i,j,k,l,m,n,t,in,p,a,b,c;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        memset(ans,false,sizeof(ans));
        scanf("%d%d%d",&n,&m,&k);
        for(j=1; j<=n; j++)
        {
            for(l=1; l<=k; l++)
            {
                scanf("%d",&ara[j][l]);
            }
        }
        scanf("%d",&p);
        for(j=1; j<=p; j++)
        {
            scanf("%d",&a);
            ans[a]=true;
        }
        for(j=1; j<=n; j++)
        {
            for(l=1; l<=k; l++)
            {
                a=ara[j][l];
                if(a>0)
                {
                    if(ans[a]==true)
                        break;
                }
                else
                {
                    a=fabs(a);
                    if(ans[a]==false)
                        break;
                }
            }
            if(l>k)
                break;
        }
        if(j>n)
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);
    }
}
