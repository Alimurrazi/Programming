#include<stdio.h>
#include<math.h>
int main()
{
 double x,y,r,ld,sd,k;
 int t;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%lf%lf%lf",&x,&y,&r);
  k=sqrt(pow(x,2)+pow(y,2));
  ld=(r+k);
  sd=(r-k);
  printf("%.2lf %.2lf\n",sd,ld);
 }
 return 0;
}
