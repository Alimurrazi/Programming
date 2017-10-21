#include<stdio.h>
#include<math.h>
int main()
{
  double pi,ap,alc,asc,rlc,rsc,k,p,l,as,ao,n;
  pi=2*acos(0.0);
 int i=0;
  while(1)
  {
    scanf("%lf%lf",&n,&ap);
    if(n<3)
     return 0;
     i++;
    rlc=ap/((n/2)*sin((2*pi)/n));
    as=((rlc*pi)-ap);
    rsc=ap/(n*(tan(pi/n)));
    ao=ap-(rsc*pi);
   printf("Case %d: %.5lf %.5lf\n",i,as,ao);
  }
  return 0;
}
