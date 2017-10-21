#include<stdio.h>

void mergesort(int ara[],int low,int mid,int high)
{
    int temp[100];
    int i,j,l,m;
    l=low;
    m=mid+1;
    i=low;
    while((l<=mid) && (m<=high))
    {
        if(ara[l]<=ara[m])
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
        for(j=m; j<=high; j++)
            temp[i++]=ara[j];
    }
    else
    {
        for(j=l; j<=mid; j++)
            temp[i++]=ara[j];
    }
    for(j=low; j<=high; j++)
        ara[j]=temp[j];
}

void partition(int ara[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        partition(ara,low,mid);
        partition(ara,mid+1,high);
        mergesort(ara,low,mid,high);
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
