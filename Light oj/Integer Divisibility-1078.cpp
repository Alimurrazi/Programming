#include<stdio.h>

char str[100005];

int div(int n,int dig)
{
    int i,j,k,l;
    k=0;
    for(i=1; ; i++)
    {
        k=k*10+dig;
        k=k%n;
        if(k==0)
        return i;
    }
}

int main()
{
    int i,j,k,l,m,t,bign,bigd,n,dig;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&n,&dig);
        k=div(n,dig);
        printf("Case %d: %d\n",i,k);
    }
}
