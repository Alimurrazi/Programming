#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

bool check[10000005];

int sieve()
{
    memset(check,true,sizeof(check));
    int i,j,k,l,m,n;
    for(i=4; i<=10000000; i=i+2)
        check[i]=false;
    for(i=3; i*i<=10000000; i=i+2)
    {
        if(check[i]==true)
        {
            for(j=i*2; j<=10000000; j=j+i)
                check[j]=false;
        }
    }
}

void findp(int n)
{
    int i,j,k,l,m,a,b;
    for(i=2; ; i++)
    {
        if(check[i]==true && check[n-i]==true)
        {
            printf("%d %d\n",i,n-i);
            break;
        }
    }
}

int main()
{
    int i,j,k,l,m,n,a,b;
    sieve();
    while(scanf("%d",&n)==1)
    {
        if(n<8)
            printf("Impossible.\n");
        else
        {
            if(n%2==0)
            {
                printf("2 2 ");
                a=n-4;
                findp(a);
            }
            else
            {
                printf("2 3 ");
                a=n-5;
                findp(a);
            }
        }
    }
}
