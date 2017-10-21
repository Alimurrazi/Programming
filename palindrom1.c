#include<stdio.h>
int main()
{
 int i,j,k,n;
 char str[100]={"rana"};
 char str1[100];
 for(i=3,j=0;i>=0;i--,j++)
 {
  str1[j]=str[i];}
//  printf("%c",str1[j]);
str1[j]='\0';
 for(i=0;i<4;i++)
 {
  printf("%c",str1[i]);
 }
 return 0;
}
