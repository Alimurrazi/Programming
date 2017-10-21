#include<stdio.h>
#include<string.h>
#include<map>
#include<iostream>
using namespace std;

//map < string , int > q1;
map <string , string >q;

int main()
{
    int i,j,k,l,m,n,l1,l2;
    string s1,s2;
    while(scanf("%d%d",&n,&m)==2)
    {
        for(i=0; i<m; i++)
        {
            cin>>s1>>s2;
            q[s1]=s2;
        }
        for(i=0;i<n;i++)
        {
            cin>>s1;
            l1=s1.length();
            l2=q[s1].length();
            if(i>0)
            printf(" ");
            if(l2<l1)
            cout<<q[s1];
            if(l1<=l2)
            cout<<s1;
        }
        cout<<endl;
    }
}
