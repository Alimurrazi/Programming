#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
    long long i,j,k,l,m,n,ans,p;
    long long ara[100005];
    double dm;
    while(cin>>n>>k)
    {
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+i);
        ans=0;
        dm=(n*1.0)/2.0;
        m=n/2;
        if(k==1)
        {
            for(i=0; i<n; i++)
                ans=ans+ara[i];
        }
        else if(dm==1)
        {
            if(ara[n-1]>ans)
                ans=ara[n-1];
        }
        else
        {
            j=0;
            cout<<"m=="<<m<<endl;
            for(i=0; i<m; i++)
            {
                p=ara[j]+ara[j+1];
                j=j+2;
                if(p>ans)
                    ans=p;
            }
            cout<<ans<<endl;
            if(j<n)
            {
            p=ara[n-1];
            if(p>ans)
                ans=p;
            }
        }
        cout<<ans<<endl;
    }
}
