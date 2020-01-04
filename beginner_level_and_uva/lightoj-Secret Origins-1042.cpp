#include<stdio.h>
#include<math.h>

void binary(int n)
{
    int ara[10000],i=0,j;
    while(n!=0)
    {
     ara[i++]=n%2;
     n=n/2;
    }
    for(j=i-1;j>=0;j--)
    printf("%d",ara[j]);
    printf("\n");
}

int main()
{
    int i,j,k,l,m,n;
    while(scanf("%d",&n)==1)
    {
     binary(n);
    }
}
