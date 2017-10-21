#include<stdio.h>
int main()
{
    int ara[100];
    int i,j,k,l,m,n,temp;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&ara[i]);
    for(i=0; i<n; i++)
    {
        k=ara[i];
        l=-1;
        for(j=i+1; j<n; j++)
        {
            if(ara[j]<k)
            {
                k=ara[j];
                l=j;
            }
        }
        if(l!=-1)
        {
            temp=ara[l];
            ara[l]=ara[i];
            ara[i]=temp;
        }
        else
            break;
    }
    for(i=0; i<n; i++)
        printf("%d ",ara[i]);
    printf("\n");
}
