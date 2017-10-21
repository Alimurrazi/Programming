#include<stdio.h>
int main()
{
 int i,j,k,n;
 long long sum;
while(1)
{
 scanf("%lld",&n);
 if(n==0)
   return 0;
 sum=0;
 for(i=1;i<=n;i++)
 {
  sum=sum+(i*i);
 }
 printf("%lld\n",sum);
}
 return 0;
}
