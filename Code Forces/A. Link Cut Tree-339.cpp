#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
using namespace std;

long long change(long long base,long long power)
{
    long long i,j,k,l;
    if(base==0)
        return 1;
    l=1;
    for(i=1; i<=power; i++)
    {
        l=l*base;
    }
    return l;
}

int main()
{
    double k,l,m,b,e,a1,a2,fa1,fa2,c;
    double  i,j;
    long long base,power;
    scanf("%lf%lf%lf",&b,&e,&k);
    if(b>e)
    swap(b,e);
    a1=log10(b)/log10(k);
    fa1=floor(a1);
    if((a1-fa1)>0.0)
        i=fa1+1;
    else
        i=fa1;
    a2=log10(e)/log10(k);
    fa2=floor(a2);
    j=fa2;
    if(i>j)
        printf("-1\n");
    else
    {
        int p=0;
        base=k;
        cout<<i<<" "<<j<<endl;
        for(c=i; c<=j; c++)
        {
            power=c;
            if(p==1)
                printf(" ");
            p=1;
            cout<<change(base,power);
        }
        printf("\n");
    }
}
