#include<bits\stdc++.h>
using namespace std;

long long ara[200005];

int main()
{
    long long i,j,k,l,m,n,t;
    while(cin>>n)
    {
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        k=0,m=0;
        for(i=0; i<n; i++)
        {
            m=m+fabs(k-ara[i]);
            k=ara[i];
        }
        cout<<m<<endl;
    }
}
