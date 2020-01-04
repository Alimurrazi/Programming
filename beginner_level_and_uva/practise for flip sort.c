#include<stdio.h>
int main()
{
 int ara[1200];
 int i,j,k,n,temp;
 while(1)
 {
  scanf("%d",&n);
  int count=0;
  for(i=1;i<=n;i++)
  {
   scanf("%d",&ara[i]);
  }
  for(i=1;i<n;i++)
  {
   for(j=n-1;j>=i;j--)
   {
    if(ara[j-1]>ara[j])
    {
     count++;
     temp=ara[j-1];
     ara[j-1]=ara[j];
     ara[j]=temp;
    }
   }
  }
  printf("%d\n",count);
 }
 return 0;
}
