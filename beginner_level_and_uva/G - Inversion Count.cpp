#include<stdio.h>

long long sara[200000*4];
long long  ara[200005];
long long key;

long long tree(long long node,long long i,long long j)
{
    long long mid,left,right;
    if(i==j)
    {
        if(ara[i]<key)
            return sara[node]=1;
        else
            return sara[node]=0;
    }
    mid=(i+j)/2;
    left=2*node;
    right=2*node+1;
    tree(left,i,mid);
    tree(right,mid+1,j);
    sara[node]=sara[left]+sara[right];
    return sara[node];
}

int main()
{
    long long  i,j,k,l,m,n,t,ans;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&ara[i]);
        }
        ans=0;
        for(i=1; i<n; i++)
        {
            key=ara[i];
            ans=ans+tree(1,i+1,n);
        }
        printf("%lld\n",ans);
    }
}
