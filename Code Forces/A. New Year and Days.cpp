#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t;
    string s,s1;
//   while(1)
    {
        k=0;
        scanf("%d",&n);
        cin>>s1>>s;
        if(s=="week")
        {
            k=51;
            if(n==5 || n==6)
                k=k+1;
            if(n==1 || n==2 || n==3 || n==4 || n==5 || n==6 || n==7)
                k=k+1;
            printf("%d\n",k);
        }
        else
        {
            if(n<=29)
                k=12;
            else if(n==30)
                k=11;
            else if(n==31)
                k=7;
            printf("%d\n",k);
        }
    }
}
