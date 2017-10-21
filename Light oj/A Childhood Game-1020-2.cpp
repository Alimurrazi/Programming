#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    string s;
    long long i,j,k,l,m,n,t;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        cin>>n>>s;
        if(s=="Bob")
        {
            if((n%3)==0)
                printf("Case %lld: Alice\n",i);
            else
                printf("Case %lld: Bob\n",i);
        }
        else
        {
            if(((n-1)%3)==0)
                printf("Case %lld: Bob\n",i);
            else
                printf("Case %lld: Alice\n",i);
        }
    }
}
