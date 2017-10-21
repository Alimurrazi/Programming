#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,t;
    // while(scanf("%d",&n)==1)
    scanf("%d",&n);
    {
        m=n/5;
        if((n%5)!=0)
            m=m+1;
        printf("%d\n",m);
    }
}
