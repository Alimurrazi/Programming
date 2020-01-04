#include<stdio.h>
#include<math.h>
int main()
{
 long int n,i,j,k,m,d,p,a,b;
 while(scanf("%ld",&n)==1)
 {
  k=0;
  p=n*2;
  i=n;
  a=n;
  printf("%ld\n",p);
 while(1)
 {
  d=n/10;
  m=n%10;
  k=k*10+m;
  n=d;
 if(d==0)
    break;
 }
 a=sqrt(i);
 for(j=2;j<i;j++)
 {
   if(i%j==0)
      break;
 }
 if(((k==i)&&(j==i))||(i==1))
    return 0;
 }
 return 0;
}
