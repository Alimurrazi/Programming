#include<stdio.h>
#include<math.h>
int main()
{
 long int i,j,k,l,m,n,t;
 scanf("%ld",&t);
 for(j=1;j<=t;j++)
 {
  scanf("%ld",&m);
  l=0;
  for(i=0;i<m;i++)
  {
   scanf("%ld",&n);
   if(n>l)
    l=n;
  }
  printf("Case %ld: %ld\n",j,l);
 }
 return 0;
}
