#include<stdio.h>
int factorial(long long n)
{
 if (n==0)
   return 1;
  else
  return n*factorial(n-1);
}
int main()
{
 long long n=21;
 printf("%lld",factorial(n));
 return 0;
}
