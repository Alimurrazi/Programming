#include<stdio.h>
#include<queue>
#include<string.h>
using namespace std;

int dist[102][102];
int parent[102];
int node,start,last;

bool bfs()
{
    int i,j,k,u,v,l;
    bool visited[102];
    memset(visited,false,sizeof(visited));
    queue<int>q;
    q.push(start);
    visited[start]=true;
    parent[start]=-1;

    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(i=1; i<=node; i++)
        {
            v=i;
            if(visited[v]==false && dist[u][v]>0)
            {
                q.push(v);
                parent[v]=u;
                visited[v]=true;
            }
        }
    }
    return visited[last];
}

int maxflow()
{
    int i,j,k,l,m,n,u,v,sum=0;
    k=99999999;
    while(bfs())
    {
        for(v=last; v!=start; v=parent[v])
        {
            u=parent[v];
            if(dist[u][v]<k)
                k=dist[u][v];
        }
        for(v=last; v!=start; v=parent[v])
        {
            u=parent[v];
            dist[u][v]=dist[u][v]-k;
            dist[v][u]=dist[v][u]+k;
        }
        sum=sum+k;
    }
    return sum;
}

int main()
{
    int i,j,k,l,m,n,u,v,s,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d%d%d",&node,&start,&last,&n);
        for(j=1; j<=node; j++)
        {
            for(k=1; k<=node; k++)
                dist[j][k]=0;
        }
        for(j=1; j<=n; j++)
        {
            scanf("%d%d%d",&u,&v,&k);
            dist[u][v]=dist[u][v]+k;
            dist[v][u]=dist[v][u]+k;
        }
        k=maxflow();
        printf("Case %d: %d\n",i,k);
    }
}
