#include<stdio.h>

int main()
{
    int ara[100];
    int ara1[100];
    int ara2[100];
    int i,j,k,l,m,n,t,siz,p;
    char str[10];
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            return 0;
        scanf("%s",str);
        if(str[0]=='P')
        {
            for(i=1; i<=n; i++)
            {
                scanf("%d",&ara[i]);
                ara1[ara[i]]=i;
                ara2[i]=0;
            }
            for(i=1; i<=n; i++)
            {
                k=ara1[i];
                for(j=1; j<k; j++)
                {
                    if(ara[j]>i)
                        ara2[i]++;
                }
            }
            for(i=1; i<=n; i++)
            {
                if(i!=1)
                    printf(" ");
                printf("%d",ara2[i]);
            }
            printf("\n");
        }
        else
        {
            siz=0;
            for(i=1; i<=n; i++)
            {
                scanf("%d",&ara[i]);
            }
            for(i=n; i>=1; i--)
            {
                p=0;
                if(ara[i]<siz)
                {
                    j=0;
                    for(l=siz+1; ; l--)
                    {
                        j++;
                        if(j>(siz-ara[i]))
                            break;
                        ara2[l]=ara2[l-1];
                    }
                    ara2[l]=i;
                    p=1;
                    siz++;
                }
                if(p==0)
                {
                    siz++;
                    ara2[siz]=i;
                }
            }
            for(i=1; i<=n; i++)
            {
                if(i!=1)
                    printf(" ");
                printf("%d",ara2[i]);
            }
            printf("\n");
        }
    }
}
