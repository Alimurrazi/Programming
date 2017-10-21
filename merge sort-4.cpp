#include<stdio.h>

int ara[100];

int mergesort(int low,int mid,int high)
{
    int temp[100];
    int i,j,k,l,m,n,a,b;
    a=low;
    i=low;
    b=mid+1;
    while(a<=mid && b<=high)
    {
        if(ara[a]<ara[b])
        {
            temp[i]=ara[a];
            a++;
        }
        else
        {
            temp[i]=ara[b];
            b++;
        }
        i++;
    }
    if(a>mid)
    {
        for(j=b; j<=high; j++)
        {
            temp[i]=ara[j];
            i++;
        }
    }
    else
    {
        for(j=a; j<=mid; j++)
        {
            temp[i]=ara[j];
            i++;
        }
    }
    for(i=low; i<=high; i++)
        ara[i]=temp[i];
}

int merg(int low,int high)
{
  //  printf("k=%d %d\n",low,high);
    int mid;
    if(low<high)
    {
    mid=(low+high)/2;
    merg(low,mid);
    merg(mid+1,high);
    mergesort(low,mid,high);
    }
}

int main()
{
    int i,j,k,l,m,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&ara[i]);
    merg(0,n-1);
    for(i=0; i<n; i++)
    {
        printf("%d ",ara[i]);
    }
    printf("\n");
}
