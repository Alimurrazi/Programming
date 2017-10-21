#include<stdio.h>
int main()
{
 int ara[65];
 int i,j,n,max;
 scanf("%d",&n);
 //scanf("%d",ara);
 max=ara[0];
 for(i=0;i<n;i++)
 {
  scanf("%d",&ara[i]);
  if (ara[i]>max)
    max=ara[i];}
 printf(" %d",max);
 return 0;
}
