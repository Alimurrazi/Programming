#include<stdio.h>
int main()
{
 int ara[100]={5,2,8,3,1,4};
 int i,j,temp;
int n=6;
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if (ara[i]<ara[j])
   {
temp=ara[i];
ara[i]=ara[j];
ara[j]=temp;
   }
  }
 }
 for(i=0;i<n;i++)
 {
  printf("%d ",ara[i]);
 }
 return 0;
}
