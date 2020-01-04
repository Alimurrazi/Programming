#include<stdio.h>
int main()
{
 unsigned long long n;
 while(scanf("%llu",&n))
 {
  if(n==0)
        return 0;
  if(n%11==0)
        printf("%llu is a multiple of 11.\n",n);
  else
    printf("%llu is not a multiple of 11.\n",n);
 }
 return 0;
}
