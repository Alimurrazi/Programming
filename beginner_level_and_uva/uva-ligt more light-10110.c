#include<stdio.h>
#include<math.h>
int main()
{
 unsigned long long a,b,n,m,i;
 while(1)
 {
  scanf("%llu",&n);
   if(n==0)
   return 0;
  m=sqrt(n);
  a=0,b=0;
  for(i=1;i<=m;i++)
  {
   if(n%i==0)
    a++;
  }
  if(m*m==n)
    b=1;
  a=(a*2)-b;
  if(a%2==0)
    printf("no\n");
  else
    printf("yes\n");
 }
 return 0;
}
