#include<stdio.h>
#include<math.h>
int main()
{
 int i,j;
 double k,l,m,n,r,x,y,ans,x1,y1,x2,y2;
 double pi=2*acos(0.0);

 while(scanf("%lf%lf",&n,&r)==2)
 {
  ans=0;
  for(i=1;i<=n;i++)
  {
    scanf("%lf%lf",&x,&y);
    if(i==1)
    {
      x1=x;
      y1=y;
      x2=x;
      y2=y;
      continue;
    }
    k=sqrt((x-x2)*(x-x2)+(y-y2)*(y-y2));
    x2=x;
    y2=y;
    ans=ans+k;
  }

  k=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
  ans=ans+k;
  ans=ans+(2*pi*r);
  printf("%.2lf\n",ans);
 }
}
