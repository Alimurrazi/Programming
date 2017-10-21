#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int ara[40];
    int i,j,k,l,m,n,p,q,t,sum=0;
    scanf("%d",&t);

    for(m=1; m<=t; m++)
    {
        scanf("%d%d%d",&n,&p,&q);

        for(i=0; i<n; i++)
            scanf("%d",&ara[i]);

        l=0,k=0;
        for(j=1; j<=n; j++)
        {
            sum=0;
            if(j>p)
                break;
            for(i=0; i<j; i++)
            {
                sum=sum+ara[i];
                if(sum>q)
                {
                    l=1;
                    break;
                }
            }
            if(l==1)
                break;
            k=j;
        }
        printf("Case %d: %d\n",m,k);
    }
}
