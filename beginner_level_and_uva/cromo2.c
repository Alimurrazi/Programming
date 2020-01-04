#include<stdio.h>
int main()
{
 int ara[10]={4,5,1,8,9,5,6,1,8,9};
 int ara1[10];
 int i,j,k,l,temp;
 for(i=0;i<10;i++)
 {
  for(j=i+1;j<10;j++)
  {
   if(ara[i]>ara[j]){
   temp=ara[i];
   ara[i]=ara[j];
   ara[j]=temp;}
  }
 }
 for(i=0;i<10;i++)
 {
  printf("%d ",ara[i]);
 }
 return 0;
}
