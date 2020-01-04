#include<stdio.h>
int main()
{
    double k,l,m,n,a,c;
    int t,i,j;
    scanf("%d",&t);
    {
        c=100.0;
        for(i=1;i<=t;i++)
        {
            scanf("%lf%lf%lf",&k,&m,&n);
          //  a=(m/c)*n;
            k=k*100.0;
            a=m*n;
            if(k>=a)
            printf("Case %d: YES\n",i);
            else
            printf("Case %d: NO\n",i);
        }
    }
}
