#include<stdio.h>
int main()
{
 int arr[100];
 char str[100];
 int i,j,k;
 gets(str);
 for(i=0;i<=1;i++)
 {
  for(j=0;j<7;j++)
  {
   //while(str[j]!=' ')
  // {
if(str[j]==' ')
  break;
  else
  arr[i]=str[j];
   }
 //  ara[i]=str[]
  }
for(i=0;i<=1;i++)
{
printf("%d ",arr[i]);
}
return 0;
}
