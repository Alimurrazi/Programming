#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    string s1;
    string bigs,smalls;
    int big,small;
    int i,j,k,l,m,n,t,w,h;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        big=0,small=2147483647;
        for(j=1; j<=n; j++)
        {
            cin>>s1>>l>>w>>h;
            k=l*w*h;
            if(k>big)
            {
                big=k;
                bigs=s1;
            }
            if(k<small)
            {
                small=k;
                smalls=s1;
            }
        }
        if(big==small)
            printf("Case %d: no thief\n",i);
        else
            printf("Case %d: %s took chocolate from %s\n",i,bigs.c_str(),smalls.c_str());
    }
}
