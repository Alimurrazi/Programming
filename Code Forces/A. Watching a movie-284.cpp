#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,c,f,ans;
    double d;
    while(scanf("%d%d",&m,&n)==2)
    {
        c=1;
        ans=0;
        for(i=0; i<m; i++)
        {
            scanf("%d%d",&f,&l);
            k=f-c;
            d=(k*1.0)/(n*1.0);
            k=d;
            c=c+k*n;
            ans=ans+(l-c+1);
            c=l+1;
        }
        printf("%d\n",ans);
    }
}
