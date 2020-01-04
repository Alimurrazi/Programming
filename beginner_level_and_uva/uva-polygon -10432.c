#include<stdio.h>
#include<math.h>
int main()
{
 double n,r,a,pi,k,ta;
 pi=2*(2*acos(0.0));
 while(scanf("%lf%lf",&r,&n)!=EOF)
 {
 k=pi/n;
 a=sin(k);
 ta=((r*r)*sin(k))/2;
 printf("%.03lf\n",n*ta);
 }
 return 0;
}
