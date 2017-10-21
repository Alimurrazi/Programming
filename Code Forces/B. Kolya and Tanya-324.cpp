#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long long i,j,k,l,m,n;
    l=1000000000+7;
    while(cin>>n)
    {
        k=1;
        for(i=1; i<=n; i++)
        {
            k=((k%l)*(27))%l;
        }
        m=1;
        for(i=1; i<=n; i++)
        {
            m=((m%l)*(7))%l;
        }
        k=((k-m)+l)%l;
        cout<<k<<endl;
    }
}
