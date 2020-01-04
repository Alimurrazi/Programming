#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[20005];
    int ara1[20005];
    int i,j,k,l,m,n,t,a,b;
    scanf("%d",&t);
    for(l=1; l<=t; l++)
    {
        ara1[0]=-9999999;
        scanf("%d",&n);
        for(i=1; i<n; i++)
        {
            scanf("%d",&ara[i]);
            ara1[i]=ara[i];
        }
        int ma=0,fa=1,la=1,sum,pd=0,a=1,b=1;
        for(i=1; i<n; i++)
        {
            if((ara1[i-1]+ara[i])>=ara[i])
            {
                ara1[i]=ara1[i-1]+ara[i];
                b++;
            }
            else
            {
                a=i;
                b=i+1;
            }
            if(ara1[i]>ma)
            {
                ma=ara1[i];
                fa=a;
                la=b;
                pd=la-fa;
            }
            else if(ara1[i]==ma)
            {
                if((b-a)>pd)
                {
                    pd=(b)-a;
                    fa=a;
                    la=b;
                }
            }
        }
        /*
        for(i=1; i<n; i++)
        {
            printf("%d\n",ara1[i]);
        }
        */
        if(ma==0)
            printf("Route %d has no nice parts\n",l);
        else
            printf("The nicest part of route %d is between stops %d and %d\n",l,fa,la);
    }
}
