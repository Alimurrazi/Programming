#include<stdio.h>
long long coun(long long n)
{
 long long sum=1,k=1,l=0;
 while(n)
 {
  if(n%10!=0)
     sum+=n/10*k;
  else
    sum+=(n/10-1)*k+(l+1);
  l+=n%10*k;
  k=k*10;
  n=n/10;
 }
  return sum;
}
int main()
{
  long long n;
  while(1)
  {
    scanf("%lld",&n);
    printf("%lld\n",coun(n));
  }
  return 0;
}
