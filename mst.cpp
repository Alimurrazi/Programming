#include<vector>
#include<string.h>
#include<queue>
#include<stdio.h>
using namespace std;

vector<int>edge[100];
vector<int>cost[100];

/*
  1 5 2
  1 2 4
  2 5 3
*/
//priority_queue<data>q;

struct data
{
    int city,dist;
    bool operator < (const data & p)const
    {
        return p.dist<dist;
    }
};

void mst(int start)
{
    int visited[100];
    int i,j,k,l,m,n,v,p,sum=0;
    data u,d,t;
    priority_queue<data>q;
    memset(visited,0,sizeof(visited));
    k=1;

    for(i=1; i<8; i++)
    {
     printf("%d\n",k);
     u.city=k;
     visited[u.city]=1;

     for(j=0;j<edge[u.city].size();j++)
     {
     v=edge[u.city][j];
     if(visited[v]==0)
      {
       d.city=v;
       d.dist=cost[u.city][j];
       q.push(d);
      }
     }

     while(1)
     {
      t=q.top();
      if(visited[t.city]==1)
      {
      q.pop();
      continue;
      }
      if(visited[t.city]==0)
      {
       k=t.city;
       p=t.dist;
       q.pop();
       break;
      }
     }

     printf("p=%d\n",p);
     sum=sum+p;
    }
    printf("%d\n",sum);

}

int main()
{
    int i,j,k,l,m,n,x,y,z;
    for(i=0; i<11; i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        edge[x].push_back(y);
        edge[y].push_back(x);
        cost[x].push_back(z);
        cost[y].push_back(z);
    }
    mst(1);
}
