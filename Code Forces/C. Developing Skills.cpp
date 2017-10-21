#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
    long long ara[100005];
    long long i,j,k,l,m,n,ans=0,p,q,a,b;
    while(cin>>n>>k)
    {
        ans=0;
        for(i=0; i<n; i++)
            cin>>ara[i];
        sort(ara,ara+i);
        for(i=n-1; i>=0; i--)
        {
            if(ara[i]>=100)
                m=100;
            else
                m=ara[i]+k;
            if(m>=100)
                m=100;
            l=m/10;
            ans=ans+l;
            printf("%lld m=%lld a=%lld ",ara[i],m,ans);
            if((ara[i]/10)==(m/10))
                l=0;
            else if(ara[i]>=100)
                l=0;
            else
                l=(l*10)-ara[i];
            if(l<0)
                l=0;
            printf("l=%lld ",l);
            k=k-l;
            printf("k=%lld\n",k);
        }
        printf("k=%lld\n",k);
        cout<<ans<<endl;
    }
}
