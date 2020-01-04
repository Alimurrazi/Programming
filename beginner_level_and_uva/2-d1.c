#include<stdio.h>
int main()
{
 char str[3][3]={'a','b','c','d','e','f','g','h','i'};
 int i,j;
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
      printf(" %c",str[i][j]);
  }
  printf("\n");
 }
 for(i=0;i<3;i++)
 {
  for(j=2;j>=0;j--)
  {
   printf("%c ",str[j][i]);
  }
  printf("\n");
 }
 return 0;
}
