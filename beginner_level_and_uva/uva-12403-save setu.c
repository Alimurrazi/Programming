#include<stdio.h>
#include<string.h>
int main()
{
 char str[100],str1[100]={"donate"},str2[100]={"report"};
 long long k,sum=0,T,i;
 scanf("%lld",&T);
 for(i=0;i<T;i++)
 {
  scanf("%s",str);
  if(strcmp(str,str1)==0)
  {
   scanf("%lld",&k);
   sum=sum+k;
  }
  if(strcmp(str,str2)==0)
  {
   printf("%lld\n",sum);
  }
 }
 return 0;
}
