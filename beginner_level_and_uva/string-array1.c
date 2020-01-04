#include<stdio.h>
int main()
{
 int ara[100];
 char str[100]={"12 13"};
 int i=0,j=0,k;
 while(str[i]!='\')
 {
  ara[j]=str[i];
  j++;
  i++;
 }
 for(i=0;i<2;i++)
 {
  printf("%d",ara[i]);
 }
 return 0;
}
