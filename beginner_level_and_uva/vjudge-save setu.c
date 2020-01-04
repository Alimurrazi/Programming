#include<stdio.h>
#include<string.h>
int main()
{
 int i,j,k,t;
 long int tk;
 long long sum=0;
 char str[100];
 char str1[100]={"donate"};
 char str2[100]={"report"};
 scanf("%d",&t);
 //k=t/2;
 while(t--)
 {
  if(scanf("%s%ld",str,&tk))
  {
   if(strcmp(str,str1)==0)
     sum=sum+tk;
  }
  if(scanf("%s",str))
  {
   if(strcmp(str,str2)==0)
   {
    printf("%lld\n",sum);
   }
  }
 }
 return 0;
}
