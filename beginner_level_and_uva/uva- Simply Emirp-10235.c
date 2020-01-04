#include<stdio.h>
#include<math.h>
long prime(long n)
{
 long i,j,p=0;
 j=sqrt(n);
 for(i=2;i<=j;i++)
 {
   if(n%i==0)
   {
      p=1;
      break;
   }
 }
 return p;
}
int main()
{
  long m,i,j,k,n;
  while(scanf("%ld",&m)==1)
  {
    n=m;
    k=0;
    while(m!=0)
    {
      k=k*10+(m%10);
      m=m/10;
    }
    if(prime(n)==0 && prime(k)==0 && n!=k)
    {
     printf("%ld is emirp.\n",n);
     continue;
    }
    else if(prime(n)==0)
    {
     printf("%ld is prime.\n",n);
     continue;
    }
    else if(prime(n)==1)
     printf("%ld is not prime.\n",n);
  }
  return 0;
}
