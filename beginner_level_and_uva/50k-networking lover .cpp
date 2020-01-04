#include<stdio.h>
int main()
{
 long long i,j,k,l,m,n,t;
 t=1;
 while(scanf("%lld",&n)!=EOF)
 {
  printf("Case %lld: ",t);
  t++;
  m=n*(2+(n-1));
  m=m/2;
  printf("%lld\n",m);
 }
}
