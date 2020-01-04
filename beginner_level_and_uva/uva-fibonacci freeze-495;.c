#include<stdio.h>
int main()
{
  unsigned long long a,b,c,f;
  int n,i;
  while(scanf("%d",&n)==1)
  {
    a=0,b=1;
   for(i=0;i<n;i++)
   {
     c=a+b;
     a=b;
     b=c;
   }
   printf("The Fibonacci number for %d is %llu\n",n,a);
  }
  return 0;
}
