#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 char c;
 int i,j,k,l,m,n,p,q,count=0;
 while(scanf("%s",str)!=EOF)
  {
   i=0,m=0,n=0,k=0,p=0;
   while(str[i]!='+'||str[i]!='-')
   {
     m=m*10+(str[i]-'0');
     i++;
   }
   c=str[i];
   i++;
   while(1)
   {
     n=n*10+(str[i]-'0');
     i++;
    if(str[i]=='=')
     break;
   }
   i++;
   while(str[i])
   {
     if(str[i]=='?')
     {
      p=1;
      break;
     }
     k=k*10+(str[i]-'0');
     i++;
   }
   if(c=='+' && p==0)
   {
     if((m+n)==k)
      count++;
   }
   if(c=='-'&& p==0)
   {
     if((m-n)==k)
        count++;
   }
 }
  printf("%d\n",count);
}
