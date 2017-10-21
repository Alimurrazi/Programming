#include<stdio.h>
#include<math.h>

int main()
{
    int ara[100005];
    int i,j,k,l,m,n,mind,low,high;
    while(scanf("%d",&n)==1)
    {
        for(i=0; i<n; i++)
            scanf("%d",&ara[i]);
        mind=1,l=1,m=0;
        for(i=0; i<n; i++)
        {
            l=1,low=ara[i],high=ara[i];
            if(m==1)
                break;
            for(j=i+1; j<n; j++)
            {
                if(l==1)
                {
                    if(((n-1)-i)<mind)
                    {
                        m=1;
                        break;
                    }
                }
                if(ara[j]<low)
                    low=ara[j];
                if(ara[j]>high)
                    high=ara[j];
                k=high-low;
                if(k<=1)
                    l++;
                else
                    break;
            }
            if(l>mind)
            {
                mind=l;
            }
        }
        printf("%d\n",mind);
    }
}
