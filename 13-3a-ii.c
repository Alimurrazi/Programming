#include<stdio.h>
#include<string.h>
int main()
{
 int ara[30];
 char str[30];
 char str1[30];
 int length,i,j,count=0;
 gets(str);
 length=strlen(str);
 strcpy(str1,str);
 for(i=0;i<length;i++)
 {
  if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
    ara[i]++;}
printf(" %d",ara);
     //str1[i]=str[i];
    //count++;}

 return 0;
}
