#include<stdio.h>
#include<math.h>
int main()
{
 double m1,m2,m3,k,area,s,l;
 while(scanf("%lf%lf%lf",&m1,&m2,&m3)==3)
 {
  s=(m1+m2+m3)/2.0;
  area=(4/3.0)*(sqrt(s*(s-m1)*(s-m2)*(s-m3)));
  if(area<=0){
    area=-1.0;}
  printf("%.3lf\n",area);
 }
 return 0;
}
