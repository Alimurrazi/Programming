#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
vector<int>edge[100];
vector<int>cost[100];
int m,n;

struct data
{
    int city,dist;
    bool operator < (const data & p)const
    {
        return p.dist<dist;
    }
};

void tree()
{
    int visited[100];
    int i,j,k,l,p,v,sum=0;
    for(i=0; i<=m; i++)
        visited[i]=0;
    data u,d,t;
    priority_queue<data>q;
    k=1;
    for(i=1; i<m; i++)
    {
        printf("k==%d\n",k);
        u.city=k;
        visited[u.city]=1;
        for(j=0; j<edge[u.city].size(); j++)
        {
            v=edge[u.city][j];
            if(visited[v]!=1)
            {
                d.city=v;
                d.dist=cost[u.city][j];
                q.push(d);
            }
        }
        t=q.top();
        k=t.city;
        p=t.dist;
        q.pop();

        while(1)
        {
            if(visited[k]!=1)
                break;
            t=q.top();
            k=t.city;
            p=t.dist;
            q.pop();
        }
        sum=sum+p;
    }
    printf("%d\n",sum);
    while(!q.empty())
    {
        printf("1");
        q.pop();
    }
}

int main()
{
    int i,j,k,l,x,y;
    while(scanf("%d%d",&m,&n)==2)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d%d%d",&x,&y,&k);
            edge[x].push_back(y);
            edge[y].push_back(x);
            cost[x].push_back(k);
            cost[y].push_back(k);
        }
        tree();
        for(i=1; i<=m; i++)
        {
            edge[i].clear();
            cost[i].clear();
        }
    }
}
