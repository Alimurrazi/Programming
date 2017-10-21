#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,k,l,m,n,a,b;
    while(scanf("%d",&n)==1)
    {
        if(n==1||n==2)
        {
            printf("1\n");
            continue;
        }
        a=n/2;
        b=n-(a*2);
        while(1)
        {
            if(b==0)
                a=a-1;
            b=n-(a*2);
            if((fabs(a-b))==0 || fabs(a-b)==1)
                break;
            a=a-1;
        }
        printf("%d\n",a+b);
    }
}
