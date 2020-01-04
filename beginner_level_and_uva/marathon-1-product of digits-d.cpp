#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
 int ara[10000],ara1[10000];
 long i,j,k,l,m,n,sum;

 while(scanf("%ld",&n)==1)
 {
  j=0;

  while(n!=1)
  {
   for(i=2;i<=9;i++)
   {
    if(n%i==0)
    {
    n=n/i;
    ara[j]=i;
    j++;
    i=2;
    if(n==1)
    break;
    continue;
    }
   }
   if(i>9)
   {
   printf("-1\n");
   break;
   }
  }
  sort(ara,ara+j);
 // for(i=0;i<j;i++)
 // printf("%d\n",ara[i]);
  k=j;
  sum=1,j=0;

  for(i=0;i<k;i++)
  {
   sum=sum*ara[i];
   if(sum>9)
   {
    sum=sum/ara[i];
    ara1[j]=sum;
    j++;
    ara1[j]=ara[i];
    j++;
    sum=1;
   }
  }
  if(sum>1)
  ara1[j]=sum;

 // for(i=0;i<j;i++)
 // printf("%d\n",ara1[i]);
  sort(ara1,ara1+j);
  for(i=0;i<j;i++)
  printf("%d",ara1[i]);
  printf("\n");
 }
}
