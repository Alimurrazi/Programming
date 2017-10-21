#include<stdio.h>
#include<string.h>

char str[100005];
struct data
{
    int sum,add;
} tree[4*100005];
char str1[10];

void update(int node,int i,int j,int fr,int to)
{
    int mid,left,right;
    if(i>to || j<fr)
        return ;
    if(i>=fr && j<=to)
    {
        tree[node].sum=tree[node].sum+(j-i+1)*1;
        tree[node].add=tree[node].add+1;
        return ;
    }
    mid=(i+j)/2;
    left=2*node;
    right=2*node+1;
    update(left,i,mid,fr,to);
    update(right,mid+1,j,fr,to);
    tree[node].sum=tree[left].sum+tree[right].sum+(j-i+1)*tree[node].add;
}

int query(int node,int i,int j,int fr,int to,int carry)
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
    int i,j,k,l,m,n,t,q,fr,to;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        printf("Case %d:\n",i);
        scanf("%s",str);
        l=strlen(str);
        for(j=0; j<=l*4; j++)
        {
            tree[j].sum=0;
            tree[j].add=0;
        }
        n=l;
        scanf("%d",&q);
        for(j=1; j<=q; j++)
        {
            scanf("%s",str1);
            if(str1[0]=='I')
            {
                scanf("%d%d",&fr,&to);
                update(1,1,n,fr,to);
            }
            else
            {
                scanf("%d",&fr);
                k=query(1,1,n,fr,fr,0);
                if(k%2==0)
                {
                    printf("%c\n",str[fr-1]);
                }
                else
                {
                    if(str[fr-1]=='1')
                        printf("0\n");
                    else
                        printf("1\n");
                }
            }
        }
    }
}
