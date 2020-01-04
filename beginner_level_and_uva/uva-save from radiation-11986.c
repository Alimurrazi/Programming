#include<stdio.h>
#include<math.h>
int main()
{
  long long t,i,n,j,k;
  scanf("%lld",&t);
  for(i=1;i<=t;i++)
  {
   scanf("%lld",&n);
   for(j=0; ;j++)
   {
    k=pow(2,j);
   if(k>n)
   {
    printf("Case %lld: %lld\n",i,j);
    break;
   }
  }
  }
  return 0;
}
