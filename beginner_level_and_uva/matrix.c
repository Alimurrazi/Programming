#include<stdio.h>
int main()
{
 int ara[2][2];
 int i,j,k;
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   scanf("%d",&ara[i][j]);
  }
  printf("\n");
 }
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   printf("%d ",ara[i][j]);
  }
  printf("\n");
 }
 return 0;
}
