#include<stdio.h>
int m=5;

int rec(int n)
{
    m=m-1;
    printf("%d\n",m);
    if(n<=5)
        rec(n+1);
    printf("m==%d\n",m);
}

int main()
{
    int i,j,k,l,m,n,t;
    rec(2);
}
