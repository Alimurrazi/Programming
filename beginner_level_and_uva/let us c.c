#include<stdio.h>
int main()
{
 int i,j,k,n,m=0,count;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     count=1;
     count=count+m;
     printf("\n%d",count);
  for(k=n;k>=i;k--)
  {
   printf("  ");
  }
  for(j=count;j<=count+i;j++)
  {
    printf(" %d ",j);
    m++;
    }
  printf("\n");
 }
  return 0;
}
