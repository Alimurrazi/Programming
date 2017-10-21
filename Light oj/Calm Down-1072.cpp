#include<stdio.h>
#include<math.h>

int main()
{
    double j,k,l,m,n,pi,r,R,a;
    int i,t;
    pi=2*acos(0.0);
    // pi=acos(-1);
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf%lf",&R,&n);
        //   cout<<sin(pi/n)*R/(sin(pi/n) + 1)<<endl;
        a=sin(pi/n);
        r=(a*R)/(a+1.0);
        printf("Case %d: %lf\n",i,r);
    }
}
