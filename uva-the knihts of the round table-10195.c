#include<stdio.h>
#include<math.h>
int main()
{
 double a,b,c,s,k,l,m,r;
 while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
 {
  if(a==0 || b==0 || c==0)
  {
   printf("The radius of the round table is: 0.000\n");
   continue;
  }
  s=(a+b+c)/2;
  k=((s-a)*(s-b)*(s-c))/s;
  r=sqrt(k);
  printf("The radius of the round table is: %.3lf\n",r);
 }
 return 0;
}
