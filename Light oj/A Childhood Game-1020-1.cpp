#include<stdio.h>
#include<string.h>
#include<map>
#include<iostream>
using namespace std;

map < long long , long long > q1;
map < long long , long long > q2;

long long af(long long n)
{
    if(q1[n]!=0)
        return q1[n];
    if(n==1)
        return (q1[n]=1);
    if(af(n-1)==1 || af(n-2)==1)
        return (q1[n]=2);
    return (q1[n]=1);
}

long long bf(long long n)
{
    if(q2[n]!=0)
        return q2[n];
    if(n==0)
        return (q2[n]=1);
    if(bf(n-1)==1 || bf(n-2)==1)
        return (q2[n]=2);
    return (q2[n]=1);
}

int main()
{
    string s;
    long long i,j,k,l,m,n,t;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        cin>>n>>s;
        if(s=="Alice")
        {
            k=af(n);
            if(k==2)
                printf("Case %lld: Alice\n",i);
            else
                printf("Case %lld: Bob\n",i);
            //   q.clear();
        }
        else
        {
            k=bf(n);
            if(k==2)
                printf("Case %lld: Bob\n",i);
            else
                printf("Case %lld: Alice\n",i);
            //   q.clear();
        }
    }
}
