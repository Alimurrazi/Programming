#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
vector<int>edge[100];
vector<int>cost[100];
int start,destinaton,node;

void bfs(int start,int destinaton)
{
    int need[100];
    int i,j,k,l,m,n,u,v,ucost,vcost;
    int infinity=100000000;
    for(i=1; i<=node; i++)
        need[i]=infinity;
    queue<int>q;
    q.push(start);
    need[start]=0;

    while(!q.empty())
    {
        u=q.front();
        q.pop();
        ucost=need[u];
        for(i=0; i<edge[u].size(); i++)
        {
            v=edge[u][i];
            vcost=ucost+cost[u][i];
            if(vcost<need[v])
            {
                need[v]=vcost;
                q.push(v);
            }
        }
    }
    printf("%d\n",need[destinaton]);
}

int main()
{
    int i,j,k,l,m,nedge,x,y,z;
    while(scanf("%d%d",&node,&nedge)==2)
    {
        for(i=0; i<nedge; i++)
        {
            scanf("%d%d%d",&x,&y,&z);
            edge[x].push_back(y);
            edge[y].push_back(x);
            cost[x].push_back(z);
            cost[y].push_back(z);
        }
        scanf("%d%d",&start,&destinaton);
        bfs(start,destinaton);
    }
}
