/*
1 2
2 3
2 4
1 5
5 6
3 7
2 8
*/
#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
vector<int>edge[26];

void bfs(int start,int finish)
{
  int ara[30];
  int parent[30];
  int i,j,k,l,m,n,u,v;
   for(i=0;i<=26;i++)
  ara[i]=10000000;
  queue<int>q;
  q.push(start);
  ara[start]=0;
  while(!q.empty())
  {
    u=q.front();
    //printf("%d\n",u);
    q.pop();
    for(i=0;i<edge[u].size();i++)
    {
     v=edge[u][i];
     if((ara[u]+1)<ara[v])
     {
       ara[v]=ara[u]+1;
       q.push(v);
       parent[v]=u;
     }
    }
  }
  printf("dis=%d\n",ara[finish]);
  u=finish;
  while(1)
  {
    //u=finish;
    printf("%d\n",u);
    v=parent[u];
    if(v==start)
    {
    printf("%d\n",v);
    break;
    }
    u=v;
  }
}

int main()
{
  int i,j,k,x,y;
  for(i=0;i<7;i++)
  {
    scanf("%d%d",&x,&y);
    edge[x].push_back(y);
    edge[y].push_back(x);
  }
  bfs(2,5);
}
