#include<stdio.h>
#include<string.h>
#include<queue>
#include<vector>
#include<map>
using namespace std;

bool check[105];
vector<int>edge1[105];
vector<int>edge2[105];
int cost1[105][105];
int cost2[105][105];
int n;

struct data
{
    int city,dist;
    bool operator < (const data & p)const
    {
        return p.dist<dist;
    }
};
priority_queue<data>q;

int treel()
{
    data u,t,d;
    memset(check,false,sizeof(check));
    int i,j,k=0,l,sum=0,v;
    for(j=1; j<n; j++)
    {
        check[k]=true;
        for(i=0; i<edge1[k].size(); i++)
        {
            v=edge1[k][i];
            if(check[v]==false)
            {
                u.city=v;
                u.dist=cost1[k][v];
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
    }
    return sum;
}

struct data1
{
    int city,dist;
    bool operator < (const data1 & p)const
    {
        return p.dist>dist;
    }

};
priority_queue<data1>qh;

int treeh()
{
    data1 u,t,d;
    int i,j,k=0,l,m,sum=0,v;
    memset(check,false,sizeof(check));
    for(i=1; i<n; i++)
    {
        check[k]=true;
        for(j=0; j<edge2[k].size(); j++)
        {
            v=edge2[k][j];
            if(check[v]==false)
            {
                u.city=v;
                u.dist=cost2[k][v];
                qh.push(u);
            }
        }
        while(1)
        {
            t=qh.top();
            k=t.city;
            l=t.dist;
            qh.pop();
            if(check[k]==false)
                break;
        }
        sum=sum+l;
    }
    return sum;
}

int main()
{
    int i,j,k,l,m,t,x,y,low,high;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        for(j=0; j<=n; j++)
        {
            for(l=0; l<=n; l++)
            {
                cost1[j][l]=0;
                cost2[j][l]=0;
            }
        }
        for(j=1; ; j++)
        {
            scanf("%d%d%d",&x,&y,&k);
            if(x==0 && y==0 && k==0)
                break;
            if(cost1[x][y]==0 && cost2[x][y]==0)
            {
                edge1[x].push_back(y);
                edge1[y].push_back(x);
                edge2[x].push_back(y);
                edge2[y].push_back(x);
                cost1[x][y]=k;
                cost1[y][x]=k;
                cost2[x][y]=k;
                cost2[y][x]=k;
            }
            else
            {
                if(k<cost1[x][y])
                {
                    cost1[x][y]=k;
                    cost1[y][x]=k;
                }
                if(k>cost2[x][y])
                {
                    cost2[x][y]=k;
                    cost2[y][x]=k;
                }
            }
        }
        n=n+1;
        low=treel();
        high=treeh();
        k=(low+high);
        if(k%2==0)
            printf("Case %d: %d\n",i,k/2);
        else
            printf("Case %d: %d/2\n",i,k);
        for(j=0; j<n; j++)
        {
            edge1[j].clear();
            edge2[j].clear();
        }
        if(!q.empty())
        {
            while(!q.empty())
            {
                q.pop();
            }
        }
        if(!qh.empty())
        {
            while(!qh.empty())
            {
                qh.pop();
            }
        }
    }
}
