#include<stdio.h>
#include<algorithm>
using namespace std;

struct data
{
    long long sum,add;
} tree[400015];
long long ara[100005];
long long noya;

void update(long long node,long long fr,long long to,long long i,long long j)
{
    long long left,right,mid;
    if(fr>j || to<i)
        return ;

    if(fr>=i && to<=j)
    {
        tree[node].sum=tree[node].sum+(to-fr+1)*noya;
        tree[node].add=tree[node].add+noya;
        return ;
    }
    mid=(fr+to)/2;
    left=2*node;
    right=2*node+1;
    update(left,fr,mid,i,j);
    update(right,mid+1,to,i,j);
    tree[node].sum=tree[right].sum+tree[left].sum+(to-fr+1)*tree[node].add;
}

long long sum(long long node,long long fr,long long to,long long i,long long j,long long carry)
{
    long long mid,left,right,p1,p2;
    if(fr>j || to<i)
        return 0;
    if(fr>=i && to<=j)
    {
        return tree[node].sum+carry*(to-fr+1);
    }
    mid=(fr+to)/2;
    left=2*node;
    right=2*node+1;
    p1=sum(left,fr,mid,i,j,carry+tree[node].add);
    p2=sum(right,mid+1,to,i,j,carry+tree[node].add);
    return (p1+p2);
}

int main()
{
    long long i,j,k,l,m,n,t,q,key;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld%lld",&n,&q);
        for(j=1; j<=((4*n)); j++)
        {
            tree[j].sum=0;
            tree[j].add=0;
        }
        for(j=1; j<=q; j++)
        {
            scanf("%lld",&key);
            if(key==0)
            {
                scanf("%lld%lld%lld",&l,&m,&noya);
                if(l>m)
                    swap(l,m);
                update(1,1,n,l,m);
            }
            else
            {
                scanf("%lld%lld",&l,&m);
                if(l>m)
                    swap(l,m);
                k=sum(1,1,n,l,m,0);
                printf("%lld\n",k);
            }
        }
    }
}
