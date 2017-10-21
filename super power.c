#include<stdio.h>
int main()
{
 unsigned long long n=16,m,i,j,k,l,count;
   count=1;
 for(i=1;i<=4;i++)
 {
  m=1;
  for(j=1;j<=4;j++)
  {
    m=m*i;
    printf("%llu\n",m);
   // printf("%llu %llu ",m,n);
   // printf("%d %d\n",n,m);
    if(m==n)
    count++;
  }
  if(count>=2)
    printf("%llu",n);
 }
 return 0;
}
