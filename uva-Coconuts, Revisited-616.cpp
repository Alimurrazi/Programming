#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,k,l,m,n,p,start,a,b,c;
    bool flag;
    while(scanf("%d",&n)==1)
    {
        if(n<0)
        return 0;
        start=n;
       l=sqrt(n-1)+1;
       // l=n-1;
        for(i=l; i>=2; i--)
        {
            flag=true;
            if(((start-1)%i)==0)
            {
                n=start;
                for(j=1; j<=i; j++)
                {
                    if(((n-1)%i)!=0)
                    {
                        flag=false;
                        break;
                    }
                    k=(n-1)/i;
                    n=(i-1)*k;
                }
                if(flag==true)
                {
                    if((n%i)==0)
                    {
                        printf("%d coconuts, %d people and 1 monkey\n",start,i);
                        break;
                    }
                }
            }
        }
        if(i<=1)
            printf("%d coconuts, no solution\n",start);
    }
}
