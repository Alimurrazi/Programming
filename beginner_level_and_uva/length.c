#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int l,i;
 gets(str);
 l=strlen(str);
 for(i=0;i<l;i++)
 {
  printf("%c %d\n",str[i],i);
 }
}
