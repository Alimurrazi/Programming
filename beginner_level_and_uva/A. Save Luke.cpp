#include<stdio.h>
int main()
{
    double i,j,k,t,l,m,n,p,q,d,v1,v2;
    while(scanf("%lf%lf%lf%lf",&d,&l,&v1,&v2)!=EOF)
    {
     t=(l-d)/(v1+v2);
     printf("%lf\n",t);
    }
}
