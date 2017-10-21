#include<stdio.h>
int main()
{
 int ara[10][10];
 int i,j,n;
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&ara[i][j]);
  }
 }
 for(i=0;i<3;i++)
 {
  for(j=2;j>=0;j--)
  {
   printf("%d ",ara[j][i]);
  }
  printf("\n");
 }
 return 0;
}
