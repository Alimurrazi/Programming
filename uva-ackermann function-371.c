#include<stdio.h>
long long recur(long long n,long long i)
{
  if(n==1 && i!=0 )
    return i;
    i++;
  if(n%2==0)
  return recur(n/2,i);
  else
   return recur((3*n)+1,i);
}
int main()
{
 long long i=0,start,end,j,max,k,p,q;
 while(1)
 {
  scanf("%lld%lld",&start,&end);
  if(start==0 && end==0)
    return 0;
  if(start>end)
  {
    p=end;
    q=start;
  }
  else
  {
    p=start;
    q=end;
  }
  max=0;
  for(k=p;k<=q;k++)
  {
    i=0;
    if(recur(k,i)>max)
    {
     max=recur(k,i);
     j=k;
    }
  }
  printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",p,q,j,max);
 }
  return 0;
}
