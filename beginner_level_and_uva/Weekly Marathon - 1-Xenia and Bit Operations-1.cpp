#include<stdio.h>
#include<math.h>

int tree[600000];
int ara[150000];

int power(int in)
{
    int i,k;
    k=1;
    for(i=1; i<=in; i++)
    {
        k=k*2;
    }
    return k;
}

void make(int node,int i,int j,int index)
{
    int mid,left,right;
    if(i==j)
    {
        tree[node]=ara[i];
        return ;
    }
    mid=(i+j)/2;
    left=2*node;
    right=2*node+1;
    make(left,i,mid,index+1);
    make(right,mid+1,j,index+1);
    if(index%2==1)
        tree[node]=tree[left]^tree[right];
    else
        tree[node]=tree[left]|tree[right];
}

void update(int node,int i,int j,int fr,int noya,int index)
{
    int mid,left,right;
    if(i>fr || j<fr)
        return ;
    if(i==fr && j==fr)
    {
        tree[node]=noya;
        return ;
    }
    mid=(i+j)/2;
    left=2*node;
    right=2*node+1;
    update(left,i,mid,fr,noya,index-1);
    update(right,mid+1,j,fr,noya,index-1);
    if(index%2==1)
        tree[node]=tree[left]^tree[right];
    else
        tree[node]=tree[left]|tree[right];
}

int main()
{
    int i,j,k,l,m,n,t,q,noya,fr,bp;
    while(scanf("%d%d",&n,&q)==2)
    {
        bp=n-1;
        n=power(n);
        for(i=1; i<=n; i++)
            scanf("%d",&ara[i]);
        make(1,1,n,bp);
        for(j=1; j<=q; j++)
        {
            scanf("%d%d",&fr,&noya);
            update(1,1,n,fr,noya,bp);
            printf("%d\n",tree[1]);
        }
    }
}
