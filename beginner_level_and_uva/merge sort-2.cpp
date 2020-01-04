#include<stdio.h>

void mergeSort(int ara[],int low,int mid,int high)
{
    int temp[100];
    int i,j,k,l,m;
    i=low;
    l=low;
    m=mid+1;

    while((l<=mid)&&(m<=high))
    {
        if(ara[l]<ara[m])
        {
            temp[i]=ara[l];
            l++;
        }
        else
        {
            temp[i]=ara[m];
            m++;
        }
        i++;
    }

    if(l>mid)
    {
        for(k=m; k<=high; k++)
        {
            temp[i]=ara[k];
            i++;
        }
    }
    else
    {
        for(k=l; k<=mid; k++)
        {
            temp[i]=ara[k];
            i++;
        }
    }

    for(i=low; i<=high; i++)
        ara[i]=temp[i];
}

void partition(int ara[],int low,int high)
{
    int i,mid;
    mid=(low+high)/2;
    if(low<high)
    {
        partition(ara,low,mid);
        partition(ara,mid+1,high);
        mergeSort(ara,low,mid,high);
    }
}

int main()
{
    int ara[100];
    int i,j,k,l,m,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&ara[i]);
    partition(ara,0,n-1);
    for(i=0; i<n; i++)
        printf("%d ",ara[i]);
}
