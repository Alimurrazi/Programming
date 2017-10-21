#include<stdio.h>
int main()
{
    int i,j,k,l,m,n;
    while(scanf("%d",&n)==1)
    {
        k=0;
        for(i=1; i<=n; i++)
        {
            printf("%d %d\n",i,i+k);
            k=k+1;
        }
    }
}
