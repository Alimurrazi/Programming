#include<stdio.h>
int main()
{
 int ara[4]={1,0,0};
 int str[4]={1,1,0};
 int sum[4],i;
 for(i=0;i<4;i++)
 {
  if(ara[i]==1&&str[i]==1)
     sum[i]=0;
  else
  sum[i]=ara[i]+str[i];
 }
 for(i=0;i<4;i++)
 {
  printf("%d ",sum[i]);
 }
  return 0;
}
