#include<stdio.h>
long long coun(long long n)
{
  long long k=1,m,l=0,sum=1;
  if(n<0)
    return 0;
  while(n)
  {
    if(n%10!=0)
     sum+=n/10*k;
    else
     sum+=(n-1)/10*k+(l+1);
     l+=(n%10*k);
    k*=10;
    n/=10;
  }
  return sum;
}
int main()
{
  long long m,n;
  while(1)
  {
    scanf("%lld%lld",&m,&n);
    if(m<0 && n<0)
        return 0;
    printf("%lld\n",coun(n)-coun(m-1));
  }
  return 0;
}
