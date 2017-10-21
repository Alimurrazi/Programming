#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,a,b;
    while(scanf("%d",&n)==1)
    {
        k=(n/7)*2;
        if(n%7!=0)
        {
            if(n%7==1)
                k=k+1;
            else
                k=k+2;
        }
        a=k;
        b=(n/7)*2;
        if(n%7==6)
            b=b+1;
        printf("%d %d\n",b,a);
    }
}
