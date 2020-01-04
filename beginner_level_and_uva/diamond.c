#include<stdio.h>
int main()
{
    int i,j,k,l,n,m;
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        for(j=n; j>=i; j--)
        {
            printf("  ");
        }

        for(k=1; k<=(i*2)-1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("  ");
        }
        for(k=(n*2)-1; k>=(i*2)-1; k--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
