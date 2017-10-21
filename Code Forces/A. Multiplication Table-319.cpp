#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    long long i,j,k,l,m,n,a,b;
    cin>>a>>b;
    {
        long long c=0;
        for(i=1; i<=a; i++)
        {
            if((b%i)==0 && (b/i)<=a)
                c++;
        }
        cout<<c<<endl;
    }
}
