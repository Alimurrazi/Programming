#include<stdio.h>
int main()
{
    int a,b,i,j,k,l,m,n1,n2,k1,k2;
    while(scanf("%d%d%d%d",&n1,&n2,&k1,&k2)==4)
    {
        a=n1/k1;
        if(a!=0 && ((n1%k1)!=0))
            a=a+1;
        b=n2/k2;
        if(b!=0 && ((n2%k2)!=0))
            b=b+1;
        if(a<=b)
            printf("First\n");
        else
            printf("Second\n");
    }
}
