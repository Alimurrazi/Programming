#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    double p1,p2,p3,p4,p5,w1,w2,w3,w4,w5,h1,h2,k,ans;
    int i,j,l,m,n;
    while(scanf("%lf%lf%lf%lf%lf",&p1,&p2,&p3,&p4,&p5)==5)
    {
        scanf("%lf%lf%lf%lf%lf",&w1,&w2,&w3,&w4,&w5);
        scanf("%lf%lf",&h1,&h2);
        ans=0;
        ans=ans+max((0.3*500),(((1-(p1/250.0))*500.0)-(50.0*w1)));
        ans=ans+max((0.3*1000),(((1-(p2/250.0))*1000.0)-(50.0*w2)));
        ans=ans+max((0.3*1500),(((1-(p3/250.0))*1500.0)-(50.0*w3)));
        ans=ans+max((0.3*2000),(((1-(p4/250.0))*2000.0)-(50.0*w4)));
        ans=ans+max((0.3*2500),(((1-(p5/250.0))*2500.0)-(50.0*w5)));
        /*
        ans=ans+(((1-(p2/250))*1000)-(50*w2));
        ans=ans+(((1-(p3/250))*1500)-(50*w3));
        ans=ans+(((1-(p4/250))*2000)-(50*w4));
        ans=ans+(((1-(p5/250))*2500)-(50*w5));
        */
        ans=ans+(h1*100);
        ans=ans-(h2*50);
        cout<<ans<<endl;
    }
}
