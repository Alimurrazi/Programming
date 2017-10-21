#include<stdio.h>
int main()
{
 int ara[2][2];
 int i,j;
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   scanf("%d",&ara[i][j]);
   printf("%d ",ara[i]);
  }
  printf("\n");
 }
 return 0;
}
