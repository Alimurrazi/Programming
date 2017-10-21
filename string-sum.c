#include<string.h>
#include<stdio.h>
int main()
{
  char str[100]={"11"},str1[100];
  int i,j,k;
  for(i=0;i<2;i++)
  {
   str1[i]=(str[i]-'0')*(3-'0');
   printf("%c",str1[i]-'0');
  }
  return 0;
}
