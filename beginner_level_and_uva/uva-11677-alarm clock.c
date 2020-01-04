#include<stdio.h>
int main()
{
    int a,b,c,d,sum,k,l,p,h;
    while(1)
    {
        scanf("%d%d%d%d",&a,&c,&b,&d);
        if(a==0&&b==0&&c==0&&d==0)
            return 0;
        h=0,k=0,l=0;
        if(d>=c)
            k=d-c;
        else
        {
            d=d+60;
            k=d-c;
            h=1;
        }
        if(b>a)
            l=b-(a+h);
        else if(b<a||h==1)
        {
            b=b+24;
            l=b-(a+h);
        }
        printf("%d\n",k+(l*60));
    }
    return 0;
}
