#include<stdio.h>
#include<string.h>
int main()
{
 char str[100]={"BANGLAdesh"};
 int i,j,k,len;
 len=strlen(str);
 for(i=0;i<len;i++)
 {
  if(str[i]='A')
        str[i]=('a'-str[i])+'a';
 }
 printf("%s",str);
 return 0;
}
