#include<stdio.h>
#include<math.h>
int main()
{
 int ara[65540];
 double k,m,n,p=0;
 int l,t,i,j;
 i=0;
 scanf("%d",&t);
 while(t--)
 {
 scanf("%lf",&n);
 {
  if(n==1)
  {
  ara[i]=1;
  i++;
  continue;
  }
  n=n-1;
  k=sqrt(1+8*n);
  k=(-1+k)/2;
  l=int(k);
  if(p==1)
  printf(" ");
  if(l==k)
  {
  ara[i]=1;
  i++;
  }
  else
  {
  ara[i]=0;
  i++;
  }
 }
 }
 for(j=0;j<i;j++)
 {
 if(j>0)
 printf(" ");
 printf("%d",ara[j]);
 }
}
