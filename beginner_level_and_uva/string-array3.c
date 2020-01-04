#include<stdio.h>
int main()
{
 int ara[100];
 char str[100]={"100 200"};
 int i,j=0,k;
 for(i=0;i<=6;i++)
 {
  while(str[i]!=' '||str[i]!='\0')
  {
    ara[j]=str[i];
    j++;
  }
 }
printf("%d",ara[0]);
return 0;
}
