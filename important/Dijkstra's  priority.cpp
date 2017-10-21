#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>
using namespace std;

bool check[100];
vector<int>edge[100],cost[100];
int start,destinaton,node,nedge,infinity=10000000;

struct data
{
    int city,dist;
    bool operator < (const data & p)const
    {
        return p.dist > dist;
    }
};

void bfs(int start,int destinaton)
{
    int d[100];
    int i,j,k,l,ucost,vcost;
    data u,v;
    for(i=1; i<=node; i++)
    {
        d[i]=infinity;
    }
    priority_queue<data>q;
    u.city=start;
    u.dist=0;
    q.push(u);
    d[start]=0;
    while(!q.empty())
    {
        u=q.top();
        q.pop();
        ucost=d[u.city];
        check[u.city]=true;
        for(i=0; i<edge[u.city].size(); i++)
        {
            v.city=edge[u.city][i];
            vcost=ucost+cost[u.city][i];
            if(vcost<d[v.city] && check[v.city]==false)
            {
                d[v.city]=vcost;
                v.dist=vcost;
                q.push(v);
            }
        }
    }
    printf("%d\n",d[destinaton]);
}

int main()
{
    int i,j,k,l,m,n,x,y,z;
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
        memset(check,false,sizeof(check));
        bfs(start,destinaton);
        for(i=1; i<node; i++)
        {
            edge[i].clear();
            cost[i].clear();
        }
    }
}
