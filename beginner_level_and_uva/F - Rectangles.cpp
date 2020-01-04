#include<stdio.h>

int main()
{
    int i,j,k,l,m,n,t,ans;
    while(scanf("%d",&n)==1)
    {
        ans=0;
        for(i=1; i<=n; i++)
        {
            for(j=1; j*j<=i; j++)
            {
                if(i%j==0)
                    ans++;
            }
        }
        printf("%d\n",ans);
    }
}
