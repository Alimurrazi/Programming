#include<stdio.h>
#include<math.h>
int main()
{
 unsigned long long sum,a,n,i;
  while(scanf("%llu%llu",&n,&a)==2)
  {
    sum=0,i=0;
    while(i!=n)
    {
     i++;
    sum+=i*pow(a,i);
    }
    printf("%llu\n",sum);
  }
  return 0;
}
