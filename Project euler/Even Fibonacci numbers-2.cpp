#include<stdio.h>

int main()
{
    int i,j,k,l,m,n;
    int ara[100000];
    ara[1]=1;
    ara[2]=2;
    m=2;
    for(i=3; ; i++)
    {
        k=ara[i-1]+ara[i-2];
        if(k>4000000)
            break;
        if(k%2==0)
            m=m+k;
        ara[i]=k;
    }
    printf("%d\n",m);
}
