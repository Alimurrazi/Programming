#include<stdio.h>
int main()
{
 unsigned long long a,odd,sum,i,j,k,n;
 while(scanf("%llu",&n)!=EOF)
 {
  k=n;
  while(n!=1)
  {
   k=k+(n-2);
   n=(n-2);
  }
  k=((k*2)-1);
  sum=k+(k-2)+(k-4);
  printf("%llu\n",sum);
 }
 return 0;
}
