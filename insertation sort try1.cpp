#include<stdio.h>
int main()
{
    int ara[100];
    int i,j,k,l,m,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&ara[i]);
    for(i=0;i<n;i++)
       printf("%d ",ara[i]);

    for(i=1; i<n; i++)
    {
        for(j=i-1; j>=0; j--)
        {
            if(ara[j]<ara[i])
                break;
            ara[j+1]=ara[j];
        }
        ara[j+1]=ara[i];
        printf("0==%d\n",ara[0]);
    }
    for(i=0; i<n; i++)
        printf("%d ",ara[i]);
    printf("\n");
}
