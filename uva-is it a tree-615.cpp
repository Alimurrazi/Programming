#include<stdio.h>
#include<vector>
#include<string.h>
using namespace std;

vector<long>edge[1000000];
bool check1[1000000];
bool check2[1000000];
vector<long>q;
int node,root,node1,p;

void dfs(long u)
{
    long v,i,j;
    check2[u]=true;
    node++;
    for(i=0;i<edge[u].size();i++)
    {
     v=edge[u][i];
     if(check2[v]==false)
     dfs(v);
    }
    q.push_back(u);
}

void dfs1(long u)
{
    long v,i,j;
    if(p==1)
    return ;
    check2[u]=true;
    node1++;
    for(i=0;i<edge[u].size();i++)
    {
     v=edge[u][i];
     if(check2[v]==true)
     {
     p=1;
     return ;
     }
     if(p==1)
     return ;
     if(check2[v]==false)
     dfs1(v);
    }
}

int main()
{
    long i,j,k,l,m,n,x,y,high,t=0,c;
    long long low;
    while(1)
    {
     t++;
     low=100000000000005,high=0;
    memset(check1,false,sizeof(check1));
    memset(check2,false,sizeof(check2));
    c=0;
    while(1)
    {
        scanf("%ld%ld",&x,&y);
        if(x==0 && y==0)
            break;
        c=1;
        if(x<0 && y<0)
             return 0;
        check1[x]=check1[y]=true;
        if(x<low)
            low=x;
        if(x>high)
            high=x;
        if(y<low)
            low=y;
        if(y>high)
            high=y;
        edge[x].push_back(y);
    }
    if(c==0)
    {
       printf("Case %ld is a tree.\n",t);
       continue;
    }
    node=0;
    for(i=low; i<=high; i++)
    {
        if(check1[i]==true)
        {
            if(check2[i]==false)
                dfs(i);
        }
    }
    root=q[node-1];
    node1=0,p=0;
    memset(check2,false,sizeof(check2));
    dfs1(root);
    if(p==1 || node1!=node)
    printf("Case %ld is not a tree.\n",t);
    else if(p==0 && node1==node)
    printf("Case %ld is a tree.\n",t);
    for(i=low;i<=high;i++)
    {
    if(check1[i]==true)
    edge[i].clear();
    }
    q.clear();
    }
}
