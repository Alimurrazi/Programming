#include<stdio.h>
#include<math.h>
int main()
{
 int i,j,k,l,m,n,p;
 while(1)
 {
  scanf("%d",&n);
  m=0;
  if(n==0)
    return 0;
  else
    while(n!=1)
  {
  i=n/3;
  m=m+i;
  j=fmod(n,3);
  n=i+j;
  if(n==2)
   n=n+1;}
 printf("%d\n",m);}
 return 0;
}
