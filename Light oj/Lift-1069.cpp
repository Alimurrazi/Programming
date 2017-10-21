#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,k,l,m,n,t,mp,lp,ts;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        ts=0;
        scanf("%d%d",&mp,&lp);
        ts=(3*2+5*2);
        m=fabs(mp-lp);
        ts=ts+m*4+(mp-0)*4+3;
        printf("Case %d: %d\n",i,ts);
    }
}
