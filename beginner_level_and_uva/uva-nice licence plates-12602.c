#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
 char str[10000];
 int i,j,n,m,length,l,k,t;
 scanf("%d",&t);
 while(t--)
 {
   scanf("%s",str);
   m=0,n=0,j=2,l,i=0;
   m=m+((str[i]-'A')*pow(26,2));
   i=i+1;
   m=m+((str[i]-'A')*pow(26,1));
   i=i+1;
   m=m+((str[i]-'A')*pow(26,0));
   i=i+1;
  for(i=4;i<=7;i++)
  n=n*10+(str[i]-'0');
  if(fabs(m-n)<=100)
  printf("nice\n");
  else
  printf("not nice\n");
 }
 return 0;
}
