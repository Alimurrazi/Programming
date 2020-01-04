#include<stdio.h>
#include<vector>
#include<string.h>
#include<stack>
using namespace std;
int node,nedge;

vector<int>edge[100];
bool check[100];
stack<int>q;

void dfs(int start)
{
    int i,j,k,l,m,n;
    check[start]=true;
    for(i=0; i<edge[start].size(); i++)
    {
        m=edge[start][i];
        if(check[m]==false)
            dfs(m);
    }
    q.push(start);
}

int main()
{
    int i,j,k,l,m,n,x,y;
    memset(check,false,sizeof(check));
    scanf("%d%d",&node,&nedge);
    for(i=0; i<nedge; i++)
    {
        scanf("%d%d",&x,&y);
        edge[x].push_back(y);
    }
    for(i=1; i<=node; i++)
    {
        if(check[i]==false)
            dfs(i);
    }
    while(!q.empty())
    {
        x=q.top();
        q.pop();
        printf("%d\n",x);
    }
}
