#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,l;
    int ara[1005];
    memset(ara,0,sizeof(ara));
    for(i=3*1; i<1000; i=i+3)
        ara[i]=1;
    k=0;
    for(i=5*1; i<1000; i=i+5)
        ara[i]=1;
    for(i=3; i<1000; i++)
    {
        if(ara[i]==1)
            k=k+i;
    }
    printf("%d\n",k);
}
