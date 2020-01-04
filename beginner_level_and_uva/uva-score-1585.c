#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int i,j,k,n,t,length,s;
 scanf("%d%*c",&t);
 while(t--)
 {
  gets(str);
  length=strlen(str);
  s=0,k=0;
  for(i=0;i<length;i++)
  {
   if(str[i]=='O')
      {
       s=s+1;
       k=k+s;
      }
   if(str[i]=='X')
   {
     s=0;
     continue;
   }
  }
  printf("%d\n",k);
 }
 return 0;
}
