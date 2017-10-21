#include<stdio.h>
#include<iostream>
#include<map>
using namespace std;
long long ara[100000];
map<long long , long long >index;

void check()
{
    long long i,j,k,l,m,n,last,first,f,s;
    ara[1]=4;
    index[4]=1;
    ara[2]=7;
    index[7]=2;
    last=2,first=1;
    f=40,s=70,j=3;
    while(1)
    {
        for(i=first; i<=last; i++)
        {
            ara[j]=ara[i]+f;
            if(ara[j]>1000000000)
                return ;
            index[ara[j]]=j;
            j++;
        }
        f=f*10;
        for(i=first; i<=last; i++)
        {
            ara[j]=ara[i]+s;
            if(ara[j]>1000000000)
                return ;
            index[ara[j]]=j;

            j++;
        }
        s=s*10;
        first=last+1;
        last=j-1;
    }
}

int main()
{
    long long i,j,k,l,m,n;
    check();
    while(cin>>n)
    {
        cout<<index[n]<<endl;
    }
}
