#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
    long long   ara[200];
    long long i,j,k,l,m,n,c;
    cin>>n;
    {
        for(i=0; i<n; i++)
            cin>>ara[i];
        l=n;
        k=0;
        for(i=0; i<l; i++)
        {
            if(ara[i]==1)
            {
                if(k==0)
                    k=1;
                c=0;
                for(j=i+1; j<l; j++)
                {
                    c++;
                    if(ara[j]==1)
                    {
                        i=j-1;
                        break;
                    }
                }
                if(j==l)
                    continue;
                k=k*c;
            }
        }
        cout<<k<<endl;
    }
}
