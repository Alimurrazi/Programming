#include<stdio.h>
#include<string.h>
int main()
{
  char str[100]={"1732"},str1[100]={"0068"},str2[100];
  int sum=0,sum1=0,sum2=0,count=0,i;
  for(i=4;i>0;i--)
  {
   count=0;
   sum=((str[i]-'0')+(str1[i]-'0'));
   sum1=((str[i+1]-'0')+(str1[i+1]-'0'));
   if(sum>9){
        count++;
        printf("%d ",count);}
    if(sum1==9 && count==1)
    {
    count++;
    printf("%d ",count);}
    sum2=sum2+count;
  }
  printf("%d ",sum2);
  return 0;
}
