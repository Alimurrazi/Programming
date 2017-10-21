#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>
using namespace std;

vector<int>edge[100];
bool check[100];

void dfs(int start)
{
    int i,j,k,l,u,v;
    u=start;
    check[u]=true;
    for(i=0; i<edge[u].size(); i++)
    {
        v=edge[u][i];
        if(check[v]==false)
            dfs(v);
    }
}

int main()
{
    int i,j,k,l,m,n,x,y,node;
    while(scanf("%d%d",&node,&n)==2)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d%d",&x,&y);
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
    }
    memset(check,false,sizeof(check));
    for(i=1; i<=node; i++)
    {
        if(check[i]==false)
            dfs(i);
    }
}

