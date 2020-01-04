#include<stdio.h>
int ara[100];

void quicksort(int low,int high)
{
    int i,j,k,l,m,n,pivot,temp;
    pivot=high;
    while(low<high)
    {
        for(i=high; i>pivot; i--)
        {
            if(ara[i]<ara[pivot])
            {
                temp=ara[i];
                ara[i]=ara[pivot];
                ara[pivot]=temp;
                break;
            }
        }
        for(j=low; j<pivot; j++)
        {
            if(ara[j]>ara[pivot])
            {
                temp=ara[j];
                ara[j]=ara[pivot];
                ara[pivot]=temp;
                break;
            }
        }
        if(i==pivot && j==pivot)
        {
            quicksort(low,pivot-1);
            quicksort(pivot+1,high);
            break;
        }
    }
}

int main()
{
    int i,j,k,l,m,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&ara[i]);
    quicksort(0,n-1);
    for(i=0; i<n; i++)
        printf("%d ",ara[i]);
    printf("\n");
}
