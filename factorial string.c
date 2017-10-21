#include<stdio.h>
#include<string.h>
int main()
{
 char str[10]={"12"},str1[10];
 int i,j=0,k,rem,count,tot;
 for(i=0;i<2;i++)
 {
  // printf("%c",str[i]);
   tot=(str[i]-'0')*3;
   str1[j]=tot;
   j++;
  printf("%d ",tot);
 }
 str1[j]='\0';
 printf("%s ",str1);
//for(j=0;j<2;j++)
//{
 // printf("%c ",str1[j]);
//}
 return 0;
}
