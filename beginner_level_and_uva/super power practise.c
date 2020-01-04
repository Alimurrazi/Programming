#include<stdio.h>
#include<math.h>
#include<limits.h>
int main()
{
 unsigned long long n,count,m,i,j,k,s,t;
 count=0,m=1;
 t=ULLONG_MAX;
 for(n=0;n<=t;n++)
 {
   count=0;
   s=sqrt(n);
 for(i=0;i<=s;i++)
 {
  m=1;
  for(j=0;j<=s;j++)
  {
    m=m*i;
    if(m>n)
    break;
    if(m==n)
        count++;
  }
  if(count==2)
    break;
 }
 if(count==2)
 printf("%llu\n",n);}
 return 0;
}
