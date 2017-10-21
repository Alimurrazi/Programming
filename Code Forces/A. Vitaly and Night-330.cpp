#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,t,ans,a,b;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        ans=0;
        for(i=0; i<m; i++)
        {
         for(j=0;j<n;j++)
         {
            scanf("%d%d",&a,&b);
                ans=ans+(a|b);
         }
        }
        printf("%d\n",ans);
    }
}
