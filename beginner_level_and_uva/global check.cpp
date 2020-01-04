#include <stdio.h>
int main()
{
    int n,i,a[110],count,t,j,k,r;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        count=0;
        scanf("%d",&t);
        for(j=1; j<=t; j++)
            scanf("%d",&a[j]);
        for(k=1; k<=t; k++)
        {
            if(a[k]!=k)
            {
                for(j=k+1; j<=t; j++)
                    if(a[j]==k)
                    {
                        r=a[j];
                        a[j]=a[k];
                        a[k]=r;
                        count++;
                    }
            }
            for(i=1; i<=t; i++)
            {
                printf("%d ",a[i]);
            }
            printf("\n");
        }
        printf("Case %d: %d\nn",i,count);
    }
    return 0;
}
