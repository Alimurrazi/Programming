#include<stdio.h>
#include<math.h>
int main()
{
    int d,u,v;
    int i,te;
    scanf("%d",&te);
    for(i=1; i<=te; i++)
    {
        scanf("%d%d%d",&d,&v,&u);
        if(v>=u||v==0||u==0)
        {
            printf("Case %d: can't determine\n",i);
            continue;
        }
        double t1=0,t2=0;
        t1=d*1.0/u;
        t2=d*1.0/(sqrt(u*u-v*v));
        printf("Case %d: %.3lf\n",i,t2-t1);
    }
    return 0;
}
