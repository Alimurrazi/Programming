#include<stdio.h>
#include<string.h>
#include<map>
#include<iostream>
using namespace std;

int funct(string s)
{
    int i,j,k,l,m,n;
    l=s.length();
    if(l==0)
        return 0;
    m=0;
    for(i=0; i<l; i++)
        m=m+(s[i]-'0');
    for(i=0; i<l-1; i++)
    {
        m=m-(s[i]-'0');
        if(m%3==0)
            break;
    }
    if(i==l)
        return 0;

}

int main()
{
    int i,j,k,l,m,n,t;
    string s;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        cin>>s;
        k=funct(s);
        if(k==1)
            printf("S\n");
        else
            printf("T\n");
    }
}
