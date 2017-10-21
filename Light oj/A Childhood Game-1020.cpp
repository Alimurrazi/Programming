#include<stdio.h>
#include<map>
#include<string.h>
#include<iostream>
using namespace std;

bool check[2147483647];
bool check1[2147483647];

int bcall(int n)
{
    if(n==0)
        return 0;
    if(n>0)
    {
        if(bcall(n-1)==0 || bcall(n-2)==0)
            return 1;
    }
    return 0;
}

int acall(int n)
{
    if(n==0)
        return 1;
    if(n>0)
    {
        if(acall(n-1)==1 && acall(n-2)==1)
            return 0;
    }
    return 1;
}

int main()
{
    int i,j,k,l,m,t,n;
    string s;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        cin>>n>>s;
        printf("Case %d: ",i);
        if(s=="Bob")
        {
            k=bcall(n);
            if(k==1)
                cout<<s<<endl;
            else
                cout<<"Alice"<<endl;
        }
        else
        {
            k=acall(n);
            if(k==1)
                cout<<s<<endl;
            else
                cout<<"Bob"<<endl;
        }
    }
}
