#include<stdio.h>
int main()
{
    int i,j,k,l,m,n;
    int ara[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&ara[i]);
    for(i=1; i<n; i++)
    {
        m=ara[i];
        for(j=i-1; j>=0; j--)
        {
            if(ara[j]<m)
                break;
            ara[j+1]=ara[j];
        }
        ara[j+1]=m;
    }
    for(i=0; i<n; i++)
        printf("%d ",ara[i]);
    printf("\n");
}
