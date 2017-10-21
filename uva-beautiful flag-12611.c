#include<stdio.h>
int main()
{
 int i,r,l,w,ul,ur,lr,ll,x,y,z,t;
 scanf("%d",&t);
 for(i=1;i<=t;i++)
 {
  scanf("%d",&r);
  l=(100*r)/20;
  w=(l*60)/100;
  ur=(l*55)/100;
  ul=(l*45)/100;
  y=w/2;
  printf("Case %d:\n",i);
  printf("-%d %d\n",ul,y);
  printf("%d %d\n",ur,y);
  printf("%d -%d\n",ur,y);
  printf("-%d -%d\n",ul,y);
 }
 return 0;
}
