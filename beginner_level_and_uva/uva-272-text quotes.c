#include<stdio.h>
#include<string.h>
int main()
{
 char str[999999],str1[100];
 long length,count,i;
 while(gets(str))
 {
 length=strlen(str);
 count=0;
 for(i=0;i<length;i++)
 {
  if(str[i]=='"')
  {
   count++;
   if(count%2==0)
        printf("''");
   else
    printf("``");
  }
   else
    printf("%c",str[i]);
 }
 printf("\n");
 }
 return 0;
}
