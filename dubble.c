#include<stdio.h>
int main()
{
 int ara[10]={4,2,2,5};
 int ara1[10];
 int i,j;
 for(i=0;i<4;i++)
 {
  for(j=1;j<=4;j++)
  {
   if(ara[i]==ara[j])
     ara1[i]=ara[j];
  }
 }
 for(i=0;i<1;i++)
 {
  printf("%d ",ara1[i]);
 }
 return 0;
}
