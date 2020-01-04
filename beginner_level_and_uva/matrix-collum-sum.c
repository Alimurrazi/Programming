#include<stdio.h>
int main()
{
 int ara[12][12];
 int i,j,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%d",&ara[i][j]);
  }
  printf("\n");
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d ",ara[i][j]);
  }
  printf("\n");
 }
 int sum=0,max=0;
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
    sum=sum+ara[j][i];
   }
  printf("sum of %dth collum= %d \n",i,sum);
  if(sum>max)
  {
   max=sum;
  }
  sum=0;
  }
  printf("\nmaximum sum of collum is:%d\n",max);
  return 0;
}
