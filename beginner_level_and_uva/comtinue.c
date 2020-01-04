#include<stdio.h>
int main()
{
  int i,j,k,n;
  for(i=1;i<=10;i++)
  {
   if(i%4==0)continue;
   printf("%d ",i);
  }
  return 0;
}
