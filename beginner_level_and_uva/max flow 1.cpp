#include<stdio.h>
#include<string.h>
#include<queue>
using namespace std;

int ara[100][100];
int node,edge,fi,en;
int parent[100];

bool bfs()
{
    int i,j,k,l,m,n,u,v;
    bool d[100];
    memset(d,false,sizeof(d));
    queue<int>q;
    q.push(fi);
    d[fi]=true;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(i=1; i<=node; i++)
        {
            if(ara[u][i]!=0 && d[i]==false)
            {
                d[i]=true;
                q.push(i);
                parent[i]=u;
            }
        }
    }
    return d[en];
}

void maxflow()
{
    int i,j,k,l,m,n,sum=0,u,v;
    while(bfs())
    {
     k=99999999;
     for(v=en;v!=fi;v=parent[v])
     {
        u=parent[v];
        if(ara[u][v]<k)
        k=ara[u][v];
     }
     for(v=en;v!=fi;v=parent[v])
     {
         u=parent[v];
         ara[u][v]=ara[u][v]-k;
         ara[v][u]=ara[v][u]+k;
     }
     sum=sum+k;
    }
    printf("%d\n",sum);
}

int main()
{
    int i,j,k,l,m,n,t,x,y;
    scanf("%d",&node);
    for(i=1; i<=node; i++)
    {
        for(j=1; j<=node; j++)
            ara[i][j]=0;
    }
    scanf("%d",&edge);
    scanf("%d%d",&fi,&en);
    for(i=1; i<=edge; i++)
    {
        scanf("%d%d%d",&x,&y,&k);
        ara[x][y]=k;
    }
    maxflow();
}
