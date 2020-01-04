#include<stdio.h>
int main()
{
 int n,i;
 while(scanf("%d",&n)==1)
 {
  for(i=1;i<=n;i++)
  {
  if(i>1)
  printf(" ");
  printf("%d",i);
  }
  printf("\n");
 }
}
