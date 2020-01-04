#include<stdio.h>
int main()
{
 long long n,i,j,k;
 while(1)
 {
  scanf("%lld",&n);
  if(n<0)
    return 0;
  k=1;
  for(i=1;i<=n;i++)
  {
   k=k+i;
  }
  printf("%lld\n",k);
 }
 return 0;
}
