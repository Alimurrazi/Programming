#include<stdio.h>
int main()
{
  long long a,b,diff;
   long long co,m,k=1,atco,btco;
  int i=0,j=1;
 while(1)
 {
  scanf("%lld%lld",&a,&b);
   j=1,atco=0,m=1,k=1;
  if(a==0)
    atco=1;
  while(m>0)
  {
   k=k*10;
   m=a/k;
   co=m*j;
   atco=atco+co;
   j=j*10;
  }
  printf("%lld ",atco);
   j=1,btco=0,m=1,k=1;
  if(b==0)
    btco=1;
  while(m>0)
  {
   k=k*10;
   m=a/k;
   co=m*j;
   btco=btco+co;
   j=j*10;
  }
  printf("%lld\n",btco);
 }
 return 0;
}
