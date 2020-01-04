#include<stdio.h>
int main()
{
 double a1,b1,c1,a2,b2,c2,x,y,k,l,m,n;
 while(1)
 {
  scanf("%lf%lf%lf%lf%lf%lf",&a1,&b1,&c1,&a2,&b2,&c2);
  if(a1==0 && b1==0 && c1== 0 && a2==0 && b2==0 && c2==0)
        return 0;
  if(a1==b1 && a2==b2 && a1==a2)
  {
   printf("No fixed point exists.\n");
    continue;
  }
  k=(b2*c1-b1*c2);
  l=(a1*c2-a2*c1);
  m=(a1*b2-a2*b1);
  if(m==0)
  {
    printf("No fixed point exists.\n");
    continue;
  }
  x=k/m;
  y=l/m;
  if(k==0)
    x=0;
  if(l==0)
    y=0;
  printf("The fixed point is at %.2lf %.2lf.\n",x,y);
 }
 return 0;
}
