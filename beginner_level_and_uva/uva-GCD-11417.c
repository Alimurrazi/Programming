#include<stdio.h>
long long gcd(int a,int b)
{
 if(a==0)
    return b;
 else
    return gcd(b%a,a);
}
int main()
{
 int a,b,n,i,j;
 long long tgcd;
 while(1)
 {
  scanf("%d",&n);
  if(n==0)
    return 0;
  tgcd=0;
  for(i=1;i<n;i++)
  {
   for(j=i+1;j<=n;j++)
   {
    tgcd=tgcd+gcd(i,j);
   }
  }
  printf("%lld\n",tgcd);
 }
 return 0;
}
