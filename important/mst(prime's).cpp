#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>
using namespace std;

vector<int>edge[100];
vector<int>cost[100];
int node,nedge;
bool check[100];

struct data
{
    int city,dist;
    bool operator < (const data & p)const
    {
        return p.dist < dist;
    }
};

void tree()
{
    int i,j,k,l,m,n,v,sum;
    priority_queue<data>q;
    data u,t,d;
    k=1;
    sum=0;
    for(j=1; j<node; j++)
    {
        printf("k==%d\n",k);
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
            k=t.city;
            l=t.dist;
            q.pop();
            if(check[k]==false)
                break;
        }
        sum=sum+l;
        printf("sum==%d\n",sum);
    }
    printf("%d\n",sum);
}

int main()
{
    int i,j,k,l,m,x,y,z;
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
        memset(check,false,sizeof(check));
        tree();
    }
}
