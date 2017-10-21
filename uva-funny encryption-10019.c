#include<stdio.h>
#include<math.h>
 int main()
 {
  int k,l,m,n,b1,b2,p,length,t;
  scanf("%d",&t);
  while(t--)
  {
  scanf("%d",&n);
  k=n;
  b1=0,b2=0;
  while(n!=0)
  {
    l=n%2;
    n=n/2;
    if(l==1)
      b1++;
  }
  printf("%d",b1);
  n=0,length=0;
  while(k!=0)
  {
   p=k%10;
   n=n+(p*pow(16,length));
   k=k/10;
   length++;
  }
  while(n!=0)
  {
   l=n%2;
   n=n/2;
   if(l==1)
     b2++;
  }
  printf(" %d\n",b2);
  }
  return 0;
 }

