#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 gets(str);
 int length,i;
 length=strlen(str);
 for(i=0;i<length;i++)
 {
  str[i]=(str[i]-'a'+'A');
 }
 for(i=0;i<length;i++)
 {
  printf("%c",str[i]);
 }
 return 0;
}
