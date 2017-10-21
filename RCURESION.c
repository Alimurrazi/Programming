#include<stdio.h>
long long rec(long long n)
{
 long long sum=0,t;
 while(n>0)
 {
  t=n%10;
  sum=sum+t;
  n=n/10;
 }
 if(sum>=10)
 {
  n=sum;
  return rec(n);
 }
 else
    return sum;
}
int main()
{
 long long n;
 while(1)
 {
 scanf("%lld",&n);
 if(n==0)
    return 0;
 printf("%d\n",rec(n));}
 return 0;
}
