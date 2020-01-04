#include<stdio.h>
int main()
{
  int i,j,a;
  for(i=1;i<=3;i=i+1)
  {
     for(j=1;j<=10;j++)
     {
      printf("%d * %d = %d\n",i,j,i*j);
     }
     printf("\n");
  }
}
