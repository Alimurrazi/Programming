#include<stdio.h>
int main()
{
    double i,j,k,l,m,n,a,b,c,d;
    while(scanf("%lf%lf%lf%lf",&a,&b,&c,&d)==4)
    {
        k=1-(1-(a/b))*(1-(c/d));
        k=(a/b)/k;
        printf("%lf\n",k);
    }
}
