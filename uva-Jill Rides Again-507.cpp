#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[20005];
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    for(l=1; l<=t; l++)
    {
        scanf("%d",&n);
        for(i=1; i<n; i++)
            scanf("%d",&ara[i]);
        int ma=0,fa=0,la=0,sum,pd=0;
        for(i=1; i<n; i++)
        {
            sum=ara[i];
            for(j=i; j<n; j++)
            {
                if(j==i)
                    sum=sum+0;
                else
                    sum=sum+ara[j];
                if(sum>ma)
                {
                    ma=sum;
                    fa=i;
                    la=j+1;
                    pd=la-fa;
                }
                else if(sum==ma)
                {
                    if(((j+1)-i)>pd)
                    {
                        pd=(j+1)-i;
                        fa=i;
                        la=j+1;
                    }
                }
                //       printf("i=%d j=%d ma=%d\n",i,j,ma);
            }
        }
        if(ma==0)
            printf("Route %d has no nice parts\n",l);
        else
            printf("The nicest part of route %d is between stops %d and %d\n",l,fa,la);
    }
}
