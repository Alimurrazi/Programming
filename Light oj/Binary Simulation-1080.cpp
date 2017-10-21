#include<stdio.h>
#include<string.h>

char str[100005];
char strk[10];
struct data
{
    int sum,add;
} tree[400005];

void update(int node,int fr,int to,int i,int j)
{
    int left,right,mid;
    if(fr>j || to<i)
        return ;
    if(fr>=i && to<=j)
    {
        tree[node].sum=tree[node].sum+(to-fr+1)*1;
        tree[node].add=tree[node].add+1;
        return ;
    }
    mid=(fr+to)/2;
    left=2*node;
    right=2*node+1;
    update(left,fr,mid,i,j);
    update(right,mid+1,to,i,j);
    tree[node].sum=tree[left].sum+tree[right].sum+(to-fr+1)*tree[node].add;
}

int query(int node,int fr,int to,int i,int j,int carry)
{
    int mid,left,right,k,l;
    if(fr>j || to<i)
        return 0;
    if(fr>=i && to<=j)
    {
        return tree[node].sum+(to-fr+1)*carry;
    }
    mid=(fr+to)/2;
    left=2*node;
    right=2*node+1;
    k=query(left,fr,mid,i,j,carry+tree[node].add);
    l=query(right,mid+1,to,i,j,carry+tree[node].add);
    return (k+l);
}

int main()
{
    int i,j,k,l,m,n,q,t,fr,to;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%s",str);
        l=strlen(str);
        l=l*4;
        for(j=1; j<=l; j++)
        {
            tree[j].sum=0;
            tree[j].add=0;
        }
        scanf("%d",&n);
        printf("Case %d:\n",i);
        for(j=1; j<=n; j++)
        {
            scanf("%s",strk);
            if(strk[0]=='I')
            {
                scanf("%d%d",&fr,&to);
                update(1,1,n,fr,to);
                /*
                for(k=1;k<=10;k++)
                {
                 printf("%d %d %d\n",k,tree[k].sum,tree[k].add);
                }
                //    return 0;
                */
            }
            /*
                        else
                        {
                            scanf("%d%d",&fr,&to);
                            k=query(1,1,n,fr,to,0);
                            printf("%d\n",k);
                            continue;
                        }
             */
            if(strk[0]=='Q')
            {
                scanf("%d",&fr);
                k=query(1,1,n,fr,fr,0);
                if(k%2==0)
                    printf("%c\n",str[fr-1]);
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
