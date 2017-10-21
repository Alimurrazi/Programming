#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,t;
    double k,l,m,n,v1,v2,v3,a1,a2,d,d1,d2,ti,t1,t2;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        d=0;
        scanf("%lf%lf%lf%lf%lf",&v1,&v2,&v3,&a1,&a2);
        d1=(v1*v1)/(2*a1);
        d2=(v2*v2)/(2*a2);
        d=d1+d2;
        t1=v1/a1;
        t2=v2/a2;
        if(t1>t2)
        {
            k=t1*v3;
        }
        else
            k=t2*v3;
        printf("Case %d: %.8lf %.8lf\n",i,d,k);
    }
}
