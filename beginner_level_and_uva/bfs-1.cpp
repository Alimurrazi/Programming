#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<queue>
using namespace std;
vector<int>G[100];
void bfs(int n,int src)
{
    queue<int>Q;
    Q.push(src);
    int visited[100]={0},level[100];
    int parent[100];
    visited[src]=1;
    level[src]=0;
    while(!Q.empty())
    {
        int u=Q.front();
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(!visited[v])
            {
                level[v]=level[u]+1;
                printf("%d ",level[v]);
                parent[v]=u;
                visited[v]=1;
                Q.push(v);
            }
        }
        Q.pop();
    }
    for(int i=1;i<=n;i++)
        printf("%d to %d distance %d",src,i,level[i]);
}
int main()
{
 int i,j,k,l;
 //char str[100][100];
// G[1][3]={2,3,4};
 bfs(5,1);
}
