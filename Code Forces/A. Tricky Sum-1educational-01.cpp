#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    long long i,j,l,m,n,t;
    long long ara[40000];
    long double ans,li,k;
    k=1;
    ara[0]=1;
    for(i=1; ; i++)
    {
        k=k*2;
        ara[i]=k;
        if(k>1000000000)
            break;
    }
    // scanf("%lld",&t);
    cin>>t;
    while(t--)
    {
        cin>>n;
        //   scanf("%lld",&n);
        ans=0,li=0,k=0;
        for(i=0; ; i++)
        {
            if((ara[i+1])==n)
                k=n-ara[i]-1;
            else if(ara[i+1]>n)
                k=n-ara[i];
            else
                k=(ara[i+1])-(ara[i])-1;
            ans=k/(2*1.0);
            ans=ans*(2*1.0*(ara[i]+1)+(k-1));
            li=li+ans;
            if((ara[i+1])>=n)
                break;
        }
        ans=li;
        k=0;
        for(i=0 ; ; i++)
        {
            if(ara[i]>n)
                break;
            k=k+ara[i];
        }
        k=ans-k;
        l=k;
        cout<<l<<endl;
    }
}
