#include<stdio.h>
int main()
{
 int ara[2][3];
 int i,j;
 scanf("%d",ara);
 for(i=0;i<2;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("%d",ara[i][j]);
  }
  printf("\n");
 }
 return 0;
}
