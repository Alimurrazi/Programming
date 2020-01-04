#include<stdio.h>
#include<string.h>
int main()
{ char str[100];
  int i,len;
  gets(str);
  len=strlen(str);
  for(i=0;i<len;i++)
  {
   if(str[i]=='a'|| str[i]==' '|| str[i]=='.')
        continue;
   printf("%c",str[i]);}
   return 0;
  }
