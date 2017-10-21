#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int i,j,k,l,m,n,p,a,b,c,key,u,v;
    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        if(a>c && b>c)
        {
            if(a>=b)
            {
                printf("%d 0\n",c);
            }
            if(b>a)
            {
                printf("0 %d\n",c);
            }
        }
       else if(a<c && b<c)
        {
            if(b<=a)
            {
                key=b;
                n=c-key;
                if(n<=a && n>=0)
                    printf("%d %d\n",n,key);
                else
                    printf("Impossible\n");
            }
        if(a<b)
            {
                key=a;
                n=c-key;
                if(n<=b && n>=0)
                    printf("%d %d\n",key,n);
                else
                    printf("Impossible\n");
            }
        }
      else if((a>=c && b<=c )|| (b>=c && a<=c))
        {
            if(a<=b)
            {
                key=a;
                n=c-key;
                if(n<=b && n>=0)
                {
                    printf("%d %d\n",key,n);
                }
                else
                    printf("Impossible\n");
            }
            else
            {
                key=b;
                n=c-key;
                if(n<=a && n>=0)
                {
                    printf("%d %d\n",n,key);
                }
                else
                    printf("Impossible\n");
            }
        }
    }
}
