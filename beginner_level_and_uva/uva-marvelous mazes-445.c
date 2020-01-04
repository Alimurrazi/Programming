#include<stdio.h>
int main()
{
 char str[140];
 char c;
 int i,j,k,l,n;
 while(gets(str))
 {
   i=0;
  while(str[i])
  {
    n=0;
    while(str[i]>='0' && str[i]<='9')
    {
     n=n+str[i]-'0';
     i++;
     }
     c=str[i];
     if(c=='b')
     c=' ';
     if(c=='!')
     {
     c='\n';
     printf("%c",c);
     }
     for(j=0;j<n;j++)
      printf("%c",c);
     i++;
  }
  printf("\n");
 }
}
