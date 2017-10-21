#include<string.h>
#include<stdio.h>
char rstr[](char str)
{
  int i;
  for(i=0;i<5;i++)
  {
    str[i]='a';
  }
  str[i]='\0';
  return str;
}
int main()
{
  int i;
  char str[100];
  printf("%s",rstr(str));
  return 0;
}
