#include<stdio.h>
#include<math.h>
int main()
{
  double a,b,c,at,asc,abc,sun,viol,roses,scr,bcr,s;
  double pi=2*acos(0.0);
  while(scanf("%lf%lf%lf",&a,&b,&c)==3)
  {
   s=(a+b+c)/2;
   at=sqrt(s*(s-a)*(s-b)*(s-c));
   scr=at/s;
   asc=pi*scr*scr;
   viol=at-asc;
   bcr=(a*b*c)/(4*at);
   abc=pi*bcr*bcr;
   sun=abc-at;
   printf("%.4lf %.4lf %.4lf\n",sun,viol,asc);
  }
  return 0;
}
