#include<stdio.h>
#include<math.h>
int main()
{
 double n1,n2,n3,r1,r2;
 int n,i=0;
 while(1)
 {
  scanf("%d",&n);
  if(n==0)
    return 0;
 scanf("%lf%lf%lf",&n1,&n2,&n3);
   i=i+1;
 if(n==1)
 {
 r1=(n2-n1)/n3;
 r2=(n2*n2-n1*n1)/(2*r1);
 printf("Case %d: %.3lf %.3lf\n",i,r2,r1);
 continue;
 }
 if(n==2)
 {
  r1=(n2*n2-n1*n1)/(2*n3);
  r2=(n2-n1)/n3;
  printf("Case %d: %.3lf %.3lf\n",i,r1,r2);
  continue;
 }
 if(n==3)
 {
  r1=sqrt((n1*n1)+2*n2*n3);
  r2=(r1-n1)/n2;
  printf("Case %d: %.3lf %.3lf\n",i,r1,r2);
  continue;
 }
 if(n==4)
 {
  r1=sqrt(n1*n1-2*n2*n3);
  r2=(n1-r1)/n2;
  printf("Case %d: %.3lf %.3lf\n",i,r1,r2);
  continue;
 }
 }
 return 0;
}
