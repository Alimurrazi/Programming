#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
 unsigned long long ara[50];
 char str1[200],str2[200];
 unsigned long long i,j,k,l,m,n,le1,le2,q;
 while(scanf("%s%s",str1,str2)==2)
 {
   m=0,n=0;
   le1=strlen(str1);
   le2=strlen(str2);
   l=1;
   k=2;
   //for(k=1;k<=36;k++)
   {
     m=0,k=2;
    for(i=0,j=le1-1;i<le1;i++,j--)
    {
      if(str1[i]>='A'&&str1[i]<='Z')
      {
      m+=(str1[i]-'A'+10)*pow(k,j);
      }
      else
      m+=(str1[i]-'0')*pow(k,j);
      printf("%lld",m);
    }
    ara[l]=m;
   // printf("%lld ",ara[l]);
    l++;
   }
    for(k=1;k<=36;k++)
   {
     n=0,q=0;
    for(i=0,j=le2-1;i<le2;i++,j--)
    {
      if(str2[i]>='A'&&str2[i]<='Z')
      {
      n+=(str2[i]-'A'+10)*pow(k,j);
      }
      else
      n+=(str2[i]-'0')*pow(k,j);
    }
    printf("%lld ",n);
    for(i=1;i<=36;i++)
    {
      if(k==i)
    continue;
      if(n==ara[i])      {
        printf("%lld %lld\n",k,i);
        q=1;
       // break;
      }
    }
    if(q==1)
     break;
   }
   }
}
