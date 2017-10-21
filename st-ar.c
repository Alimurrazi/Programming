#include<stdio.h>
int main()
{
 int i;
 char str[100];
 gets(str);
 for(i=0;i<=10;i++)
 {
  if(str[i]==' ')
        continue;
   else
  printf("%d ",str[i+1]);
 }
 printf("%c",48+9);
 return 0;
}
