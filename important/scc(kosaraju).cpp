#include<stdio.h>
#include<vector>
#include<string.h>
#include<stack>
using namespace std;

vector<int>edge1[100];
vector<int>edge2[100];
bool check[100];
stack<int>ans;

void dfs1(int u)
{
    int i,j,v;
    check[u]=true;
    for(i=0; i<edge1[u].size(); i++)
    {
        v=edge1[u][i];
        if(check[v]==false)
            dfs1(v);
    }
    ans.push(u);
}

void dfs2(int u)
{
    int i,j,v;
    check[u]=true;
    for(i=0; i<edge2[u].size(); i++)
    {
        v=edge2[u][i];
        if(check[v]==false)
            dfs2(v);
    }
}

int main()
{
    int i,j,k,l,m,n,node,nedge,x,y,how;
    while(scanf("%d%d",&node,&nedge)==2)
    {
        how=0;
        for(i=0; i<nedge; i++)
        {
            scanf("%d%d",&x,&y);
            edge1[x].push_back(y);
            edge2[y].push_back(x);
        }
        memset(check,false,sizeof(check));
        for(i=1; i<=node; i++)
        {
            if(check[i]==false)
                dfs1(i);
        }
        memset(check,false,sizeof(check));
        while(!ans.empty())
        {
            i=ans.top();
            ans.pop();
            if(check[i]==false)
            {
                how++;
                dfs2(i);
            }
        }
        printf("%d\n",how);
        for(i=1; i<=node; i++)
        {
            edge1[i].clear();
            edge2[i].clear();
        }
    }
}
