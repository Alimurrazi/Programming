#include<stdio.h>
#include<math.h>
#define pi acos(0.0)
int main()
{
 double p,s,sin108,sin63;
 sin108=sin((2*108.0*pi)/180.0);
  sin63=sin((2*63.0*pi)/180);
 while(scanf("%lf",&p)!=EOF)
 {
  printf("%.10lf\n",p*(sin108/sin63));

 }
 return 0;
}
