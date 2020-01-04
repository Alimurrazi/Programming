#include<stdio.h>
int main()
{
 long long i,j,k,a,b,c;
 int n;
 while(scanf("%d",&n)==1)
 {
  if(n==0)
    return 0;
  a=0,b=1;
 for(i=0;i<n;i++)
 {
  c=a+b;
  a=b;
  b=c;
 }
 printf("%lld\n",c);
 }
 return 0;
}
