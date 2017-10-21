#include<stdio.h>
int main()
{
 int ara[2000008];
 int i,j,k,l,n,m,temp;
 while(scanf("%d",&n)==1)
 {
  if(n==0)
        return 0;
  for(i=0;i<n;i++)
  {
   scanf("%d",&ara[i]);
  }
  for(i=0;i<n;i++)
  {
   for(j=i+1;j<n;j++)
   {
    if(ara[i]>ara[j])
    {
     temp=ara[i];
     ara[i]=ara[j];
     ara[j]=temp;
    }
   }
  }
  for(i=0;i<n;i++)
  {
   printf("%d ",ara[i]);
  }
  printf("\n");
 }
 return 0;
}
