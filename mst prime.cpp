#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>
using namespace std;

vector<int>edge[100];
vector<int>cost[100];
int node,nedge;

struct data
{
    int city,dist;
    bool operator < (const data & p)const
    {
        return p.dist < dist;
    }
};

priority_queue<data>q;

void mst()
{
    int i,j,k,l,m,n,v,sum;
    bool check[100];
    memset(check,false,sizeof(check));
    data u,t,d;
    k=1,sum=0;
    for(j=1; j<node; j++)
    {
        check[k]=true;
        for(i=0; i<edge[k].size(); i++)
        {
            v=edge[k][i];
            if(check[v]==false)
            {
                u.city=v;
                u.dist=cost[k][i];
                q.push(u);
            }
        }
        while(1)
        {
            t=q.top();
            q.pop();
            k=t.city;
            l=t.dist;
            if(check[k]==false)
            {
                break;
            }
        }
        sum=sum+l;
    }
    printf("%d\n",sum);
}

int main()
{
    int i,j,k,l,m,n,x,y;
    scanf("%d%d",&node,&edge);
    for(i=1; i<=nedge; i++)
    {
        scanf("%d%d%d",&x,&y,&k);
        edge[x].push_back(y);
        edge[y].push_back(x);
        cost[x].push_back(k);
        cost[y].push_back(k);
    }
    mst();
}
