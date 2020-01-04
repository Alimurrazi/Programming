#include<stdio.h>
#include<string.h>
int change(int n)
{
 int m=0;
 while(n!=0)
 {
  m=m*10+n%10;
  n=n/10;
 }
  return m;
}
int main()
{
  char str[1000];
  char c;
  int i,k,l,m,n;
  while(gets(str))
  {
    l=strlen(str);
   if(str[0]>='0'&&str[0]<='9')
   {
     m=0;
     for(i=l-1;i>=0;i--)
     {
       m=m*10+(str[i]-'0');
       i=i-1;
       m=m*10+(str[i]-'0');
       if(m<=23)
       {
        i=i-1;
         m=m*10+(str[i]-'0');
       }
       printf("%c",m);
       m=0;
     }
     printf("\n");
   }
   else
   {
     for(i=l-1;i>=0;i--)
     {
       c=str[i];
       k=c;
       k=change(k);
       if(k==1)
       printf("001");
       else if(k==6)
       printf("06");
       else if(k==7)
       printf("07");
       else if(k==8)
       printf("08");
       else if(k==9)
       printf("09");
       else if(k==11)
       printf("011");
       else if(k==21)
       printf("021");
       else
       printf("%d",k);
     }
     printf("\n");
   }
  }
}
