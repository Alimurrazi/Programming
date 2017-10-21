#include <iostream>
#include<map>
#include<algorithm>
#include<iomanip>
#include <cstdio>
#include <string.h>
#include<stdio.h>
#include <cstring>
#include<set>
using namespace std;

int main()
{
    map<string,int>tree;
    std::set<std::string>species;
    char s[50];
    int i,j,k=0,l,m,n,t;
    double a,b;
    scanf("%d%*c%*c",&t);
    for(i=1; i<=t; i++)
    {
        k=0;
        while(gets(s))
        {
            if(strlen(s)==0)
                break;
            k++;
            tree[s]++;
            species.insert(s);
        }
        if(i!=1)
            printf("\n");
        for (std::set<std::string>::iterator i=species.begin(); i!=species.end(); ++i)
        {
            a=(tree[*i]*1.0)/(k*1.0);
            a=a*100.0;
            cout<<*i<<' '<<setprecision(4)<<fixed<<a<<endl;
        }
        tree.clear();
        species.clear();
    }
}
