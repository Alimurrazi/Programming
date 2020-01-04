#include<stdio.h>
#include<string.h>
#include<vector>
#include<queue>
using namespace std;

vector<int>edge[102];
vector<int>cost[102];
bool check[102];
int finish,n;
int d[105];

struct data
{
    int u,dist;
    bool operator < (const data & p)const
    {
     if(p.dist>dist)
     return false;
     return true;
    }
};

priority_queue<data>q;

int bfs(int start)
{
    data t,p;
    int i,j,k,l,m,x,y;
    for(i=1;i<=n;i++)
    d[i]=2147483647;
    d[start]=0;
    t.u=start;
    t.dist=0;
    q.push(t);
    while(!q.empty())
    {
     t=q.top();
     q.pop();
     x=t.u;
     k=t.dist;
     check[x]=true;
     for(i=0;i<edge[x].size();i++)
     {
      y=edge[x][i];
      if((k+cost[x][i])<d[y])
      {
       if(check[y]==false)
       {
       d[y]=k+cost[x][i];
       t.u=y;
       t.dist=d[y];
       q.push(t);
       }
      }
     }
    }
    return d[finish];
}

int main()
{
    int i,j,k,l,m,t,time,x,y,ans;
    scanf("%d",&t);
    while(t--)
    {
     ans=0;
     scanf("%d%d%d%d",&n,&finish,&time,&m);
     for(i=0;i<m;i++)
     {
     scanf("%d%d%d",&x,&y,&k);
     edge[x].push_back(y);
     cost[x].push_back(k);
     }
     for(i=1;i<=n;i++)
     {
      memset(check,false,sizeof(check));
      l=bfs(i);
      if(l<=time)
      ans++;
     }
     printf("%d\n",ans);
     if(t!=0)
     printf("\n");
     for(i=0;i<=n;i++)
     {
      edge[i].clear();
      cost[i].clear();
     }
    }
}
