#include<stdio.h>
int main()
{
  long long m,n,k,t;
  scanf("%lld",&t);
  while(t--)
  {
    scanf("%lld%lld",&m,&n);
    if((m%m==0 && n%m==0)&&(n%m==0 && n%n==0))
     printf("%lld %lld\n",m,n);
    else
     printf("-1\n");
  }
  return 0;
}
