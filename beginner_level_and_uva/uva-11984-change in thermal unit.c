#include<stdio.h>
#include<math.h>
int main()
{
 int t,i;
 float f,r,c,d,a=9,b=5;
 scanf("%d",&t);
 for(i=1;i<=t;i++)
 {
  scanf("%f%f",&c,&d);
  f=((a/b)*c)+32;
  f=f+d;
  r=(b/a)*(f-32);
  printf("Case %d: %.2f\n",i,r);
 }
 return 0;
}
