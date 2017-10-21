#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,ans;
    int ara[100005];
    int ara1[100005];
    while(scanf("%d%d",&n,&k)==2)
    {
        for(i=0; i<n; i++)
            scanf("%d",&ara[i]);
        j=n-1;
        ans=ara[n-1];
        for(i=0; i<k; i++)
        {
            ara1[i]=ara[j];
            j=j-1;
        }
        for(i=k-1; ; i--)
        {
            if(j<0)
                break;
            ara1[i]=ara1[i]+ara[j];
            if(ara1[i]>ans)
                ans=ara1[i];
            j=j-1;
        }
        printf("%d\n",ans);
    }
}
