#include<stdio.h>
int main()
{
   int ara[100];
   int i,j,k,l,m,n;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
    scanf("%d",&ara[i]);
   }

   for(i=0;i<n;i++)
   {
    k=ara[i];
    j=i-1;
    while(k<ara[j] && j>=0)
    {
     ara[j+1]=ara[j];
     j=j-1;
    }
    ara[j+1]=k;
   }

   for(i=0;i<n;i++)
   printf("%d ",ara[i]);
}
