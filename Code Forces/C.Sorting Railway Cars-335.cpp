#include<stdio.h>

int ara[100005];
int seq[100005];

int main()
{
    int i,j,k,l,m,n,t,low,mid,high;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
            seq[i]=2147483647;
        }
        seq[0]=-2147483647;
        l=0;
        for(i=1; i<=n; i++)
        {
            low=0;
            high=l;
            while(low<=high)
            {
                mid=(low+high)/2;
                if(ara[i]>seq[mid])
                    low=mid+1;
                else
                    high=mid-1;
            }
            seq[low]=ara[i];
            if(low>l)
                l=low;
        }
        printf("%d\n",n-l);
    }
}
