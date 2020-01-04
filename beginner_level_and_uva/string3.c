#include<stdio.h>
int main()
{
 char str[100];
 char str1[100];
 int i,j,k,length;
 gets(str);
 length=strlen(str);
 for(i=length-1;i>=0;i--)
 {
  if(str[i]==' ')
        continue;
  printf("%c",str[i]);
 }
 return 0;
}
