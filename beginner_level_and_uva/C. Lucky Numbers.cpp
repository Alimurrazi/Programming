#include<stdio.h>
#include<iostream>
using namespace std;

long long power(long long x,long long y)
{
    long long ans=1,i,j;
    for(i=1; i<=y; i++)
    {
        ans=ans*x;
    }
    return ans;
}

int main()
{
    long long ara[100];
    long long i,j,k,l,m,n;
    ara[0]=0;
    for(i=1; i<=55; i++)
    {
        ara[i]=ara[i-1]+power(2,i);
    }
    while(cin>>n)
    {
        cout<<ara[n]<<endl;
    }
}
