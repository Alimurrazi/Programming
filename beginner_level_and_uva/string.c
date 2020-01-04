#include<stdio.h>
int main()
{
  int ara[30];
  int i,j,k,n,max;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&ara[i]);}
   max=ara[0];
   for(j=1;j<n;j++){
   if(ara[j]>max)
        max=ara[j];
  }
  printf ("%d",ara);
  return 0;
}
