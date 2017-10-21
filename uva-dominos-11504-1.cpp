#include<stdio.h>
#include<vector>
#include<string.h>
using namespace std;

vector<int>edge[100005],q;
bool check[100005];

void dfs1(int u)
{
    int i,v;
    check[u]=true;
    for(i=0; i<edge[u].size(); i++)
    {
        v=edge[u][i];
        if(check[v]==false)
            dfs1(v);
    }
    q.push_back(u);
}

void dfs2(int u)
{
    int i,v;
    check[u]=true;
    for(i=0; i<edge[u].size(); i++)
    {
        v=edge[u][i];
        if(check[v]==false)
            dfs2(v);
    }
}

int main()
{
    int i,j,k,l,m,n,x,y,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        for(i=0; i<m; i++)
        {
            scanf("%d%d",&x,&y);
            edge[x].push_back(y);
        }
        memset(check,false,sizeof(check));
        for(i=1; i<=n; i++)
        {
            if(check[i]==false)
                dfs1(i);
        }
        memset(check,false,sizeof(check));
        l=0;
        for(i=n-1; i>=0; i--)
        {
            x=q[i];
            if(check[x]==false)
            {
                dfs2(x);
                l++;
            }
        }
        printf("%d\n",l);
        for(i=1; i<=n; i++)
            edge[i].clear();
        q.clear();
    }
}
