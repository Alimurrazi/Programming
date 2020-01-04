#include<stdio.h>
#include<iostream>
#include<string.h>
#include<map>
using namespace std;


int funct(string s)
{
    int i,j,k,l,m,n;
    l=s.length();
    if(l==0)
        return 0;
    k=0;
    for(i=0; i<l; i++)
    {
        k=k+s[i]-'0';
    }
    for(i=0; i<l; i++)
    {
        k=k-(s[i]-'0');
        if(k%3==0)
            break;
        k=k+s[i]-'0';
    }
    if(i==l)
        return 0;
    m=0;
    string temp=s;
    for(i=0; i<l; i++)
    {
        for(j=0; j<l; j++)
        {
            cout<<"j=="<<j<<endl;
            if(i==j)
                continue;
            temp[m]=s[j];
            m=m+1;
        }
        temp[m]='\0';
        cout<<"ll=="<<temp;
        if(funct(temp)==0)
            return 1;
    }
    return 0;
}

int main()
{
    string s;
    int i,j,k,l,m,n,t;
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
