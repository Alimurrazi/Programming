#include<stdio.h>
int fa[1000];
int ca[1000];

int c(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 5;
    ca[n]=c(n-1)+4;
    return ca[n];
}

int f(int n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 2;
    fa[n]=f(n-1)+c(n-1);
    return fa[n];
}

int main()
{
    int i,j,k,l,m,n;
    while(scanf("%d",&n)==1)
    {
        k=f(n);
        printf("%d\n",k);
    }
}
