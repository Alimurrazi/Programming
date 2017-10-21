#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,k,l,t;
    double r,square,circle,d,ans,pi;
    pi=2*acos(0.0);
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
     scanf("%lf",&r);
     d=2*r;
     square=d*d;
     circle=pi*r*r;
     ans=square-circle;
     ans=ans+pow(10,-9);
     printf("Case %d: %.2lf\n",i,ans);
    }
}
