#include<stdio.h>
int main()
{
  long long n;
  unsigned long long i,j,k,m,a=0,b=1,c,mn,tn;
  while(scanf("%lld",&n)==1)
  {
    if(n<0)
        return 0;
    a=0,b=1,mn=0,tn=1;
   for(i=0;i<n;i++)
   {
    mn=mn+b;
    c=a+b;
    a=b;
    b=c;
    tn=tn+c;
   }
   printf("%llu %llu\n",mn,tn);
  }
  return 0;
}
