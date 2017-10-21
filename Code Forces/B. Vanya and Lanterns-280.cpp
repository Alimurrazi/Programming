#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
    long long ara[1005];
    long long i,j,k,l,n,a,b;
    while(cin>>n>>l)
    {
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+i);
        double m=0;
        for(i=1; i<n; i++)
        {
            if((ara[i]-ara[i-1])>m)
                m=ara[i]-ara[i-1];
        }
        m=m/(2*1.0);
        a=ara[0]-0;
        if(a>m)
            m=a;
        b=l-ara[n-1];
        if(b>m)
            m=b;
        printf("%0.9lf\n",m);
    }
}
