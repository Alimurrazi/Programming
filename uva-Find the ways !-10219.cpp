#include<stdio.h>
#include<math.h>
int main()
{
    double n,r,k,l,m,a,b,c,ans;
    int i,j;
    while(scanf("%lf%lf",&n,&r)!=EOF)
    {
        ans=0,a=0,b=0,c=0;
        for(i=n; i>(n-r); i--)
            a=a+log10(i*1.0);
        for(i=1; i<=r; i++)
            b=b+log10(i*1.0);
        ans=a-b+1.0;
        ans=floor(ans);
        printf("%0.lf\n",ans);
    }
}
