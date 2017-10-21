#include<stdio.h>
int main()
{
 long long i,j,k,n;
 long long fact;
 while(scanf("%lld",&n)!=EOF)
 {
  fact=1;
  if(n<0 && n%2==0)
  {
   printf("Underflow!\n");
   continue;
  }
  if(n<0 && n%2!=0)
  {
   printf("Overflow!\n");
   continue;
  }
  for(i=1;i<=n;i++)
  {
   fact=fact*i;
   if(fact>6227020800)
   {
     break;
   }
  }
  if(fact>6227020800)
  {
   printf("Overflow!\n");
   continue;
  }
  else if(fact<10000)
   {
    printf("Underflow!\n");
    continue;
   }
   else
   {
    printf("%lld\n",fact);
     continue;
   }
 }
 return 0;
}
