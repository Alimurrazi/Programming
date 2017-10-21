#include<stdio.h>
#include<math.h>
long power(long k,long i)
{
  long sum=1;
  long j;
  for(j=1;j<=i;j++)
    sum=sum*k;
  return sum;
}
int main()
{
  long i,j,k,l,n,m,t,sum;
  scanf("%ld",&t);
  while(t--)
  {
    scanf("%ld",&n);
    m=n;
    sum=0,j=0;
    for(i=1; ;i++)
    {
     sum=0;
     n=m;
    while(n!=0)
    {
      k=n%10;
      sum+=power(k,i);
      n=n/10;
      if(sum>m)
      {
        printf("Not Armstrong\n");
        j=1;
        break;
      }
    }
      if(sum==m)
      {
        printf("Armstrong\n");
        break;
      }
      if(j==1)
        break;
    }
    }
    return 0;
  }
