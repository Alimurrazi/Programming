#include<stdio.h>
#include<math.h>
int main()
{
 double pi,l,w,r,ta,ag,ar;
 int i,j,n,t;
 pi=acos(-1);
 while(scanf("%d",&t)==1)
 {
  while(t--)
  {
   scanf("%lf",&l);
   w=(l/10)*6;
   r=l/5;
   ta=(l*w);
   ar=pi*r*r;
   ag=ta-ar;
  printf("%.2lf %.2lf\n",ar,ag);
  }
 }
 return 0;
}
