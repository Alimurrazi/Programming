#include<stdio.h>
#include<string.h>
int main()
{
 char str[1000];
 int i,j,k,l,a;
 while(gets(str))
 {
  a=-1;
 l=strlen(str);
 for(i=0;i<l;i++)
 {
   if(str[i]==' ')
   {
     for(j=i-1;j>a;j--)
      printf("%c",str[j]);
    printf(" ");
    a=i;
   }
 }
  for(j=l-1;j>a;j--)
    printf("%c",str[j]);
    printf("\n");
 }
 return 0;
}
