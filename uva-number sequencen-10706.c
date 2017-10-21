#include<stdio.h>
int main()
{
 long long i,j,k,l,n,t,count;
// scanf("%lld",&t);
// while(t--)
 {
 // scanf("%lld",&n);
 n=2147483647;
  count=0;
  for(i=1;i<=n;i++)
  {
  // for(j=1;j<=i;j++)
   {
    count++;
    k=i;
    while(k!=0)
    {
     k=k/10;
//     if(k<)
     count++;
    }
    if(count>=n)
    {
     printf("%lld\n",i);
     //  break;
    return 0;
    }
   }
  }
 }
 return 0;
}
