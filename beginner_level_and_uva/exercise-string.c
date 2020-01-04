#include<stdio.h>
#include<string.h>
int main()
{
 int ara[100];
 char str[100];
 scanf("%s",str);
 int length,i,count=0;
 length=strlen(str);
 for(i=0;i<length;i++)
 {
  if(str[i]=='f')
    ara[i]==i &
    count++;}
for(i=0;i<count;i++)
{
 printf("%d ",ara[i]);
}

 return 0;
}
