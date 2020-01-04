#include<stdio.h>
int main()
{
  long long i,j,k,l,n,m,count,tc;
  while(1)
  {
   scanf("%lld%lld",&m,&n);
   tc=0;
   for(i=m;i<=n;i++)
   {
    k=i,count=0;
    if(k==0)
        count++;
    while(k>0)
    {
     if(k%10==0)
         count++;
    // printf("%lld ",count);
     k=k/10;
   //  printf("%lld ",k);
    }
   // printf("%lld ",count);
    tc=tc+count;
   }
  printf("%lld\n",tc);
  }
  return 0;
}
