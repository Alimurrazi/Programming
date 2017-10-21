#include<stdio.h>
int main()
{
    char str[10];
    long long i,j,k,l,m,n,t,x;
    while(scanf("%lld%lld",&n,&x)==2)
    {
      //  printf("x===%lld",x);
        long long a=0,b=0;
        char c;
        for(i=1; i<=n; i++)
        {
            scanf("%*c");
            scanf("%c",&c);
            scanf("%*c");
            scanf("%lld",&m);
          //  scanf("%*c");
          //  scanf("%s%d",str,&m);
          //  printf("c==%c m==%lld\n",c,m);
            if(c=='+')
            {
                x=x+m;
            }
            else
            {
                if(m<=x)
                    x=x-m;
                else
                    a++;
            }
          // printf("hhhhhhhh        %lld %lld\n",x,a);
        }
        printf("%lld %lld\n",x,a);
    }
}
