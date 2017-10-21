#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    long long i,j,k,l,m,n,t,ans;
    while(cin>>n)
    {
        if(n==0)
        {
            printf("1\n");
            continue;
        }
        ans=12+(n-1)*6;
        ans=(ans*n)/2;
        ans=ans+1;
        cout<<ans<<endl;
    }
}
