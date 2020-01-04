#include<stdio.h>
int main()
{
    int ara[1005];
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
        }
        k=0;
        for(i=1; i<=n; )
        {
            printf("i====%d\n",i);
            if(ara[i]==i)
            {
                i++;
                continue;
            }
            else
            {
                if(i==(n-1))
                {
                    k=1;
                    break;
                }
                if(ara[i]==i+2 && ara[i+1]==(ara[i]-2) && ara[i+2]==(ara[i]-1))
                {
                    i++;
                    i++;
                    i++;
                    continue;
                }
                else if(ara[i]==i+1 && ara[i+1]==(ara[i]+1) && ara[i+2]==(ara[i]-1))
                {
                    i++;
                    i++;
                    i++;
                    continue;
                }
                else
                {
                    k=1;
                    break;
                }
            }
        }
        if(k==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
