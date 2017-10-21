#include<stdio.h>
#include<algorithm>
using namespace std;

int ara[100005];
int tree[200015];
int f,e,mini;

void make(int node,int start,int finish)
{
    int left,right,mid;
    if(start==finish)
    {
        tree[node]=ara[start];
        return ;
    }
    mid=(start+finish)/2;
    left=2*node;
    right=2*node+1;
    make(left,start,mid);
    make(right,mid+1,finish);
    tree[node]=min(tree[left],tree[right]);
}

int dekhi(int node,int i,int j)
{
    int left,right,k,l,mid;
    if(i>e || j<f)
        return mini;
    if(i>=f && j<=e)
    {
        mini=min(mini,tree[node]);
        return mini;
    }
    mid=(i+j)/2;
    left=node*2;
    right=node*2+1;
    k=dekhi(left,i,mid);
    l=dekhi(right,mid+1,j);
    mini=min(mini,min(k,l));
    return mini;
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
            scanf("%d%d",&f,&e);
            mini=2147483647;
            dekhi(1,1,n);
            printf("%d\n",mini);
        }
    }
}
