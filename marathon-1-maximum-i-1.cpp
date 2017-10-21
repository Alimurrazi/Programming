#include<stdio.h>
int sum;
int ara[100010];

int check(int n)
{
 if(n==1)
 {
 sum=sum+1;
 return sum;
 }
 if(n%2==0)
 check(n/2);
 if(n%2!=0)
 {
  check(n/2);
  check(n/2+1);
 }
}

int main()
{
 int i,j,k,l,m,n;
 int maxi;
 ara[1]=1;
 ara[2]=1;

 j=3;
  for(i=3;i<=99999;i++)
  {
  if(i%4==0)
  {
  ara[j]=1;
  j++;
  continue;
  }
  sum=0;
  check(i);
  ara[j]=sum;
  j++;
  }

 while(scanf("%d",&n)==1)
 {
  if(n==0)
  return 0;
  maxi=1;
  for(i=3;i<=n;i++)
  {
  if(ara[i]>maxi)
  maxi=ara[i];
  }
  printf("%d\n",maxi);
 }
}
