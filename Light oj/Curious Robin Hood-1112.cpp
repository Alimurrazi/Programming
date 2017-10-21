#include<stdio.h>

int ara[100005];
int tree[300005];
int noya,key;

void make(int node,int i,int j)
{
    int mid,right,left;
    if(i==j)
    {
        tree[node]=ara[i];
        return ;
    }
    mid=(i+j)/2;
    left=2*node;
    right=2*node+1;
    make(left,i,mid);
    make(right,mid+1,j);
    tree[node]=tree[left]+tree[right];
}

void update(int node,int i,int fr,int to)
{
    int mid,left,right,p,q;
    if(fr>i || to<i)
        return ;
    if(fr==i && to==i)
    {
        if(key==1)
            tree[node]=0;
        if(key==2)
            tree[node]=tree[node]+noya;
        return ;
    }
    mid=(fr+to)/2;
    left=2*node;
    right=2*node+1;
    update(left,i,fr,mid);
    update(right,i,mid+1,to);
    tree[node]=tree[left]+tree[right];
}

int sum(int node,int i,int j,int fr,int to)
{
    int mid,left,right,p,q;
    if(fr>j || to<i)
        return 0;
    if(fr>=i && to<=j)
        return tree[node];
    mid=(fr+to)/2;
    left=2*node;
    right=2*node+1;
    p=sum(left,i,j,fr,mid);
    q=sum(right,i,j,mid+1,to);
    return (p+q);
}

int main()
{
    int i,j,k,l,m,n,t,q;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&n,&q);
        for(j=1; j<=n; j++)
        {
            scanf("%d",&ara[j]);
        }
        make(1,1,n);
        printf("Case %d:\n",i);
        for(j=1; j<=q; j++)
        {
            scanf("%d",&key);
            if(key==1)
            {
                scanf("%d",&m);
                noya=0;
                printf("%d\n",ara[m+1]);
                ara[m+1]=0;
                update(1,m+1,1,n);
            }
            else if(key==2)
            {
                scanf("%d%d",&m,&noya);
                update(1,m+1,1,n);
                ara[m+1]=ara[m+1]+noya;
            }
            else
            {
                scanf("%d%d",&l,&m);
                k=sum(1,l+1,m+1,1,n);
                printf("%d\n",k);
            }
        }
    }
}
