#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
 long long ara[5005];
 long long i,k,l,m,n,sum,cost,tcost;
 while(1)
 {
  scanf("%lld",&n);
  if(n==0)
     return 0;
  for(i=0;i<n;i++)
   scanf("%lld",&ara[i]);
  sort(ara,ara+i);
  sum=ara[0]+ara[1];
  cost=0,tcost=sum;
  for(i=2;i<n;i++)
  {
    printf("%lld ",tcost);
   cost=sum+ara[i];
   tcost=cost+tcost;

   sum=cost;
  }
//  printf("%lld\n",tcost);
 }
}
