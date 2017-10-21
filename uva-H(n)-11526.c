#include<stdio.h>
#include<math.h>
long long H(int n)
{
  if(n<1)
      return 0;
  long long sum=0;
  int sqr,i,end=n,temp;
  sqr=floor(sqrt(n));
  for(i=1;i<=sqr;i++)
  {
    temp=n/i;
    sum+=temp+(end-temp)*(i-1);
    end=temp;
  }
  if(n/sqr>sqr)
  {
    sum+=sqr;
  }
  return sum;
}
int main()
{
  int n,t;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d",&n);
    printf("%lld\n",H(n));
  }
  return 0;
}
