#include<stdio.h>
int main()
{
 char ara[2][4];
 int i,j;
 for(i=0;i<2;i++)
 {
  for(j=0;j<4;j++)
  {
   scanf("%s",&ara[i][j]);
  }
 }
 printf("\n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<4;j++)
  {
   printf("%s ",ara[i][j]);
  }
  printf("\n");
 }
 return 0;
}
