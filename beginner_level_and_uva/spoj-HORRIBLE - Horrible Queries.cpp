#include<stdio.h>
#include<algorithm>
using namespace std;

struct data
{
    long long sum,add;
} tree[400005];
long long noya;

void update(long long node,long long i,long long j,long long fr,long long to)
{
    long long mid,left,right;
    if(i>to || j<fr)
        return ;
    if(i>=fr && j<=to)
    {
        tree[node].sum=tree[node].sum+(j-i+1)*noya;
        tree[node].add=tree[node].add+noya;
        return ;
    }
    mid=(i+j)/2;
    left=2*node;
    right=2*node+1;
    update(left,i,mid,fr,to);
    update(right,mid+1,j,fr,to);
    tree[node].sum=tree[left].sum+tree[right].sum+(j-i+1)*tree[node].add;
}

long long query(long long node,long long i,long long j,long long fr,long long to,long long carry)
{
    long long mid,left,right,p1,p2;
    if(i>to || j<fr)
        return 0;
    if(i>=fr && j<=to)
    {
        return tree[node].sum+(j-i+1)*carry;
    }
    mid=(i+j)/2;
    left=2*node;
    right=2*node+1;
    p1=query(left,i,mid,fr,to,carry+tree[node].add);
    p2=query(right,mid+1,j,fr,to,carry+tree[node].add);
    return (p1+p2);
}

int main()
{
    long long i,j,k,l,m,n,t,key,q,fr,to;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld%lld",&n,&q);
        for(j=1; j<=n*4; j++)
        {
            tree[j].sum=0;
            tree[j].add=0;
        }
        for(j=1; j<=q; j++)
        {
            scanf("%lld",&key);
            if(key==0)
            {
                scanf("%lld%lld%lld",&fr,&to,&noya);
                if(to<fr)
                {
                    swap(to,fr);
                }
                update(1,1,n,fr,to);
            }
            else
            {
                scanf("%lld%lld",&fr,&to);
                if(to<fr)
                {
                    swap(to,fr);
                }
                k=query(1,1,n,fr,to,0);
                printf("%lld\n",k);
            }
        }
    }
}
