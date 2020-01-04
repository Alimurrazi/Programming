#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;

vector<int>edge[5005];
vector<int>cost[5005];
int n;

struct data
{
    int city,dist;
    bool operator < (const data & p )const
    {
        return dist > p.dist;
    }
};

int bfs(int start,int finish)
{
    int d[5005];
    int i,j,k,l,m;
    for(i=0;i<=n;i++)
    {
        d[i]=100000000;
    }
    priority_queue<data>q;
    data u,v;
    u.city=start,u.dist=0;
    q.push(u);
    d[start]=0;
    while(!q.empty())
    {
        u=q.top();
        q.pop();
        int ucost=d[u.city];
        for(i=0;i<edge[u.city].size();i++)
        {
            v.city=edge[u.city][i];
            v.dist=cost[u.city][i]+ucost;
            if(d[v.city]>v.dist)
            {
                d[v.city]=v.dist;
                q.push(v);
            }
        }
    }
    return d[finish];
}

int main()
{
    int start,finish;
    int i,j,k,l,m,o,p,r,s,t,x,y,z;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        scanf("%d%d%d",&start,&finish,&p);
        for(j=0; j<p; j++)
        {
            scanf("%d%d%d",&x,&y,&z);
            edge[x].push_back(y);
            edge[y].push_back(x);
            cost[x].push_back(z);
            cost[y].push_back(z);
        }
        k=bfs(start,finish);
        printf("%d\n",k);
        for(j=1;j<=n;j++)
        {
            edge[j].clear();
            cost[j].clear();
        }
    }
}
