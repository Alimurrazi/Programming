#include<stdio.h>
#include<algorithm>
using namespace std;

int ara[100];

void quicksort(int low,int high)
{
    int i,j,k,l,m,n,t,pivot=high,temp;
    while(low<high)
    {
        for(i=low; i<pivot; i++)
        {
            if(ara[i]>ara[pivot])
            {
                swap(ara[i],ara[pivot]);
                break;
            }
        }
        for(j=high; j>pivot; j--)
        {
            if(ara[j]<ara[pivot])
            {
                swap(ara[j],ara[pivot]);
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
    {
        scanf("%d",&ara[i]);
    }
    quicksort(0,n-1);
    for(i=0; i<n; i++)
    {
        printf("%d ",ara[i]);
    }
    printf("\n");
}
