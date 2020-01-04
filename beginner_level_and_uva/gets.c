#include<stdio.h>
int main()
{
 char str[100];
 while(gets(str)!=EOF)
 {
     printf("%s",str);
 }
 return 0;
}
