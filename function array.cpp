#include<stdio.h>

void change(int ara[],int low,int high,int m)
{
    int i;
    m=m-10;
    for(i=low;i<=high;i++)
    {
    ara[i]=ara[i]+1;
    }
}

int main()
{
    int ara[100];
    int n,i,m=55;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&ara[i]);
    change(ara,0,n-1,m);
    for(i=0;i<n;i++)
    printf("%d\n",ara[i]);
    printf("%d\n",m);
}
