#include<stdio.h>
#include<string.h>
int main()
{
 char str[100],str1[100];
 scanf("%s",str);
 int i,j,length;
 length=strlen(str);
 for(i=length-1,j=0;i>=0,j<length;i--,j++)
 {
  str1[j]=str[i];
 }
  str1[j]='\0';
  if(0==strcmp(str,str1))
  {
   printf("yes");
  }
  return 0;
}
