#include<stdio.h>
int main()
{
    int ara[100];
    int i,j,k,l,m,n,low,temp;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&ara[i]);
    for(i=0; i<n; i++)
    {
     low=ara[i],l=i;
     for(j=i+1; j<n; j++)
     {
      if(ara[j]<low)
      {
       low=ara[j];
       l=j;
      }
      temp=ara[i];
      ara[i]=ara[l];
      ara[l]=temp;
     }
    }
    for(i=0;i<n;i++)
    printf("%d ",ara[i]);
}
