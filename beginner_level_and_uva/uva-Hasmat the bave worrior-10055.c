#include<stdio.h>
#include<math.h>
int main()
{
 long long h,i,d;
 while(scanf("%lld%lld",&h,&i)!=EOF)
 {
  d=h-i;
  d=fabs(d);
  printf("%lld\n",d);
 }
  return 0;
}
