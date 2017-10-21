#include<stdio.h>
int main()
{
 long long i,j,k,l,n,p,q;
 scanf("%lld",&i);
 while(i--)
 {
 while(scanf("%lld",&n)==1)
 {
  p=0;
  while(n!=0)
  {
   p+=n%2;
   n=n/2;
  }
  printf("%lld\n",p);
 }
 }
 return 0;
}
