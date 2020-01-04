#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,t,a,b,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("Case %d: %d\n",i,c);
    }
}
