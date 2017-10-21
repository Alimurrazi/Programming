#include<stdio.h>
#include<queue>
#include<string.h>
#include<vector>
using namespace std;

vector<int>edge1[410];
vector<int>edge2[410];
queue<int>q;
int dest;
bool check[410][410];
int ara[410];

int bfs1(int n)
{
    int i,j,k,l,m,u,v,ucost,vcost;
    for(i=1; i<=n; i++)
        ara[i]=2147483647;
    q.push(1);
    ara[1]=0;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        ucost=ara[u];
        for(i=0; i<edge1[u].size(); i++)
        {
            v=edge1[u][i];
            vcost=ucost+1;
            if(vcost<ara[v])
            {
                ara[v]=vcost;
                q.push(v);
            }
        }
    }
    return ara[n];
}

int bfs2(int n)
{
    int i,j,k,l,m,u,v,ucost,vcost;
    for(i=1; i<=n; i++)
        ara[i]=2147483647;
    q.push(1);
    ara[1]=0;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        ucost=ara[u];
        for(i=0; i<edge2[u].size(); i++)
        {
            v=edge2[u][i];
            vcost=ucost+1;
            if(vcost<ara[v])
            {
                ara[v]=vcost;
                q.push(v);
            }
        }
    }
    return ara[n];
}

int main()
{
    int i,j,k,l,m,n,t,node,x,y,a,b;
    while(scanf("%d%d",&n,&node)==2)
    {
        memset(check,false,sizeof(check));
        for(i=0; i<node; i++)
        {
            scanf("%d%d",&x,&y);
            edge1[x].push_back(y);
            edge1[y].push_back(x);
            check[x][y]=check[y][x]=true;
        }
        for(i=1; i<=n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                if(i==j)
                    continue;
                if(check[i][j]==false)
                {
                    edge2[i].push_back(j);
                    edge2[j].push_back(i);
                    check[i][j]=check[j][i]=true;
                }
            }
        }
        a=bfs1(n);
        b=bfs2(n);
        if(a==2147483647 || b==2147483647)
            printf("-1\n");
        else if(a>b)
            printf("%d\n",a);
        else
            printf("%d\n",b);
    }
}
