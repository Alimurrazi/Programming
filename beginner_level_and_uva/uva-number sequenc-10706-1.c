#include<stdio.h>
int main()
{
 long n,i,j,k,m,t;
 scanf("%ld",&t);
 while(t--)
 {
  scanf("%ld",&n);
  i=1,k,m=n;
 while(1)
 {
  k=n-i;
  if(k<=0)
    break;
  n=k;
  i++;
 }
 printf("%ld\n",n);
}
return 0;
}
