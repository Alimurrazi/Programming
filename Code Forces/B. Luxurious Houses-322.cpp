#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    long long ara[100005];
    long long check[100005];
    bool fcheck[100005];
    long long i,j,k,l,m,n,t;
    while(cin>>n)
    {
        memset(fcheck,false,sizeof(fcheck));
        for(i=1; i<=n; i++)
            cin>>ara[i];
        k=ara[n];
        check[n]=k;
        fcheck[n]=true;
        for(i=n-1; i>=1; i--)
        {
            if(ara[i]>k)
            {
                fcheck[i]=true;
                k=ara[i];
            }
            check[i]=k;
        }
        for(i=1; i<=n; i++)
        {
            if(i!=1)
                printf(" ");
            if(check[i]==ara[i] && fcheck[i]==true)
                printf("0");
            else
                cout<<(check[i]-ara[i]+1);
        }
        printf("\n");
    }
}
