#include<stdio.h>
#include<math.h>
int main()
{
 long n,l,i,o;
 int t,j,x,k;
 scanf("%d",&t);
 for(j=1;j<=t;j++)
 {
  scanf("%ld",&n);
  x=(sqrt(n));
  printf("Case %d:",j);
  for(i=x;i<n;i++)
  {
   // printf("i==%ld ",i);
    k=sqrt(n-i);
   // printf("%ld ",k);
    if((k*k)==(n-i))
    {
        l=i/k;
     // printf("%ld ",l);
     if((l*k)==i)
   printf(" %ld",i);
    }
  }
  printf("\n");
 }
 return 0;
}
