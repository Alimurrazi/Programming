#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n<=10)
        printf("0 %d\n",n);
        else
        printf("10 %d\n",n-10);
    }
}
