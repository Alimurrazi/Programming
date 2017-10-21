#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,k,l,m,n,t,a,b,c;
    while(scanf("%d%d%d",&n,&a,&b)==3)
    {
        if(b>0)
        {
            k=(a+b)%n;
            if(k==0)
                k=n;
        }
        else if(b==0)
            k=a;
        else
        {
            b=fabs(b);
            l=b%n;
            {
                if(l<=a)
                    k=a-l;
                else
                {
                    l=l-a;
                    k=n-l;
                }
                if(k==0)
                    k=n;
            }
        }
        printf("%d\n",k);
    }
}
