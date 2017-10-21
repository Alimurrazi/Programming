#include<stdio.h>
#include<string.h>
int main()
{
 int ara[20];
 char str[50];
 char str1[50];
 scanf("%s",str);
 int length,i;
 length=strlen(str);
 for(i=0;i<length;i++)
 {
  if(str[i]=='f'|str[i]=='g')
         str1[i]=i;
 }
 for(i=0;i<length;i++)
 {
  printf("%c ",str1[i]);
 }
 return 0;
}
