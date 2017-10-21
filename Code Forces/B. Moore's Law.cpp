#include<stdio.h>
#include<math.h>
int main()
{
    double i,j,k,l,m,n,q,a,t;
    k=1.000000011;
    while(scanf("%lf%lf",&a,&t)==2)
    {
        n=pow(k,t);
        n=n*a;
        printf("%lf\n",n);
    }
}
