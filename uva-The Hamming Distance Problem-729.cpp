#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t,h;
    scanf("%d",&t);
    for(l=0; l<t; l++)
    {
        string s;
        if(l!=0)
            printf("\n");
        scanf("%d%d",&n,&h);
        for(i=0; i<(n-h); i++)
            s+='0';
        for(j=i; j<n; j++)
            s+='1';
        cout<<s<<endl;
        while(next_permutation(s.begin(),s.end()))
            cout<<s<<endl;
    }
}
