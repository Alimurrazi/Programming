#include<stdio.h>
#include<map>
#include<algorithm>
#include<iostream>
using namespace std;

map<long long ,long long>q;
long long ara[30];

int main()
{
    long long i,j,k,l,m,n,t,ans;
    cin>>n;
    {
        ans=0;
        for(i=1; i<=n; i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+n);
        for(i=1; i<=n; i++)
        {
            k=ara[i];
            if(q[k]==0)
            {
                q[k]=1;
            }
            else
            {
                while(1)
                {
                    if(q[k]==0)
                    {
                        q[k]=1;
                        break;
                    }
                    else
                    {
                        k=k-1;
                        if(k==0)
                            break;
                    }
                }
            }
            ans=ans+k;
        }
        cout<<ans<<endl;
        q.clear();
    }
}
