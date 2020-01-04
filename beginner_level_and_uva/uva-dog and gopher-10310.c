#include<stdio.h>
#include<math.h>
int main()
{
 long int n,i,j,p;
  double gx,gy,dx,dy,hx,hy,td,tg,rx,ry;
  while(scanf("%ld%lf%lf%lf%lf",&n,&gx,&gy,&dx,&dy)!=EOF)
  {
   p=0,j=0;
   for(i=0;i<n;i++)
   {
    scanf("%lf%lf",&hx,&hy);
    tg=sqrt(pow((gx-hx),2)+pow((gy-hy),2));
   // tg=pow(tg,(.5));
    td=sqrt(pow((dx-hx),2)+pow((dy-hy),2));
   // td=pow(td,(.5));
    if((tg*2.0)<=td)
    {
      p=1;
      if(j==1)
      continue;
      rx=hx;
      ry=hy;
      j++;
    }
   }
   if(p==1)
   {
     printf("The gopher can escape through the hole at (%.3lf,%.3lf).\n",rx,ry);
   }
   else
    printf("The gopher cannot escape.\n");
    printf("\n");
  }
  return 0;
}
