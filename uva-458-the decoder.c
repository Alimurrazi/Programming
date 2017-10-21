#include<stdio.h>
#include<string.h>
int main()
{
 char str[1000];
 int i,length;
 while(gets(str))
 {
 length=strlen(str);
 for(i=0;i<length;i++)
 {
  printf("%c",str[i]-7);
 }
 printf("\n");}
 return 0;
}
