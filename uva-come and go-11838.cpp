#include<stdio.h>
#include<string.h>
#include<vector>
#include<queue>
using namespace std;

vector<int>depends1[2005],depends2[2005];
vector<int>q;
bool check[2005];

void dfs1(int u)
{
    check[u]=true;
    int i,v;
    for(i=0; i<depends1[u].size(); i++)
    {
        v=depends1[u][i];
        if(check[v]==false)
            dfs1(v);
    }
    q.push_back(u);
}

void dfs2(int u)
{
    check[u]=true;
    int i,v;
    for(i=0; i<depends2[u].size(); i++)
    {
        v=depends2[u][i];
        if(check[v]==false)
            dfs2(v);
    }
    q.push_back(u);
}

int main()
{
    int i,j,k,l,m,n,x,y,p;
    while(scanf("%d%d",&n,&m)==2)
    {
        if(n==0 && m==0)
            return 0;
        memset(check,false,sizeof(check));
        for(i=0; i<m; i++)
        {
            scanf("%d%d%d",&x,&y,&p);
            if(p==1)
            {
                depends1[x].push_back(y);
                depends2[y].push_back(x);
            }
            else
            {
                depends1[x].push_back(y);
                depends1[y].push_back(x);
                depends2[y].push_back(x);
                depends2[x].push_back(y);
            }
        }
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
                l++;
                dfs2(x);
            }
        }
        if(l==1)
            printf("1\n");
        else
            printf("0\n");
        for(i=1; i<=n; i++)
        {
            depends1[i].clear();
            depends2[i].clear();
        }
        q.clear();
    }
}
