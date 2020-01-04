#include<stdio.h>
int main()
{
 int ara[100]={1,3,2};
 int length=3,n,i,j,k,temp,count=0;
 for(i=0;i<length;i++)
 {
  for(j=i+1;j<length;j++)
  {
   if(ara[i]>ara[j])
   {
    temp=ara[i];
    ara[i]=ara[j];
    ara[j]=temp;
    count++;
   }
  }
 }
 printf("%d\n",count);
 for(i=0;i<length;i++)
 {
  printf("%d ",ara[i]);
 }
 return 0;
}
