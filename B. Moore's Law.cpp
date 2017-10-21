#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

double power(double x,double y)
{
    double ans=1,i,j;
    for(i=1; i<=y; i++)
    {
        ans=ans*x;
    }
    return ans;
}

int main()
{
    double i,j,k,l,m,n;
    /*
    k=1000;
    for(i=1; i<=1000000; i++)
    {
        k=k*1.000000011;
    }
    printf("%lf\n",k);
    */
    k=pow(1.000000011,1000000);
    k=k-1;
    k=1*k;
    k=k/(1.000000011-1);
    cout<<k<<endl;
    m=1011.060722383550382782399454922040-k;
    cout<<m<<endl;
}
