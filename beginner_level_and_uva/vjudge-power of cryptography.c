#include<stdio.h>
#include<math.h>
int main()
{
   double p,i,j,m;
   double n,k;
   while(scanf("%lf%lf",&n,&p)!=EOF)
   {
    k=(1/n);
    i=pow(p,k);
    printf("%.0lf\n",i);
   }
    return 0;
}
