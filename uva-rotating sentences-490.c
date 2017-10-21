#include<stdio.h>
#include<string.h>
int main()
{
 char str[110][110];
 int i=0,j,k,l,m,n,max=0;
 memset(str,' ',sizeof(str));
 while(gets(str[i]))
 {
   l=strlen(str[i]);
   str[i][l]=' ';
   if(l>max)
    max=l;
   i++;
 }
 k=i-1;
 for(i=0;i<max;i++)
 {
  for(j=k;j>=0;j--)
  {
    printf("%c",str[j][i]);
  }
  printf("\n");
 }
 return 0;
}
