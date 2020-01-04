#include<stdio.h>
int f(int n)
{
    if(n>100)
        return (n-10);
    else
        return f(f(n+11));
}
int main()
{
    int n;
    while(scanf("%d",&n))
    {
        if(n==0)
            return 0;
        else
            printf("f91(%d) = %d\n",n,f(n));
    }
    return 0;
}
