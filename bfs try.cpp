#include<stdio.h>
#include<queue>
#include<vector>
using namespace std;

vector<int>edge[100];
vector<int>cost[100];
int n;

int bfs(int start,int finish)
{
    int i,j,k,l,m,u,v,ucost,vcost;
    queue<int>q;
    int dist[100];
    for(i=0;i<n;i++)
    dist[i]=10000000;
    q.push(start);
    dist[start]=0;
    while(!q.empty())
    {
     u=q.front();
    }
}

int main()
{
    int i,j,k,l,m,x,y;
    for(i=0;i<n;i++)
    {
     scanf("%d%d%d",&x,&y,&k);
     edge[x].push_back(y);
     edge[y].push_back(x);
     cost[x].push_back(k);
     cost[y].push_back(k);
    }
    k=bfs(0,n-1);
    printf("shortest path's length is %d\n",k);
}
