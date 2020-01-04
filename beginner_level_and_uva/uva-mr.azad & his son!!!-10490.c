#include<stdio.h>
#include<math.h>
int main()
{
 unsigned long long n,i,j,k;
 while(scanf("%llu",&n)==1)
 {
  if(n==0)
     return 0;
  for(i=2;i<n;i++)
  {
   if(n%i==0)
      break;
  }
  if(i==n)
  {
    if(n==11 || n==23 || n==29)
    {
     printf("Given number is prime. But, NO perfect number is available.\n");
      continue;
    }
    k=pow(2,(n-1))*((pow(2,n))-1);
    printf("Perfect: %llu!\n",k);
 }
 else
    printf("Given number is NOT prime! NO perfect number is available.\n");
}
return 0;
}
