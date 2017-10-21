#include<stdio.h>
int main()
{
 int ara[10]={1,9,1,4,9};
 int i,j,k;
 for(i=0;i<5;i++)
 {
  for(j=i;j<=0;j--)
  {
   if(ara[j]==ara[i])
        break;
  printf("%d",ara[i]);
 }}
 return 0;
}
