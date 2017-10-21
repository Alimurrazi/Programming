#include<stdio.h>
#include<math.h>

int main()
{
    double i,j,k,l,m,n,q,o,p,a,b,c,pi,d,h,v,e;
    pi=2*acos(0.0);
    while(scanf("%lf%lf%lf%lf",&d,&h,&v,&e)==4)
    {
        a=pi*(d/2)*(d/2)*h;
        k=(pi*(d/2)*(d/2)*(h+e))-(pi*(d/2)*(d/2)*h);
        k=v-k;
        if(k<=0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
            printf("%lf\n",a/k);
        }
    }
}
