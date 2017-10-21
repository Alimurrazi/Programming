#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;

vector<int>edge[100];

void bfs(int start)
{
    queue<int>q;
    int i,j,k,l,u,v;
    q.push(start);
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(i=0; i<edge[u].size(); i++)
        {
            v=edge[u][i];
            q.push(v);
        }
    }
}

int main()
{
    int i,j,k,l,m,n,x,y;
    while(scanf("%d",&n)==1)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d%d",&x,&y);
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        bfs(1);
    }
}
