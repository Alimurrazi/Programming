/*
8 11
1 2 4
1 5 2
1 4 10
5 4 5
2 4 8
2 3 18
4 3 11
4 7 11
4 8 9
7 6 1
8 6 2
*/
#include<stdio.h>
#include<queue>
#include<vector>
#include<string.h>
using namespace std;
vector<int>edge[100],cost[100];

struct data
{
 int node,dist;
 bool operator < (const data & p)const
 {
   return p.dist<dist;
 }
};

void tree()
{
 int i,j,k,l,ucost,vcost,ans;
 priority_queue<data>q;
 data u,v;
 bool visited[100];
 memset(visited,false,sizeof(visited));
 u.node=1;
 q.push(u);
 ans=0;
// while(1)
 //{
 u=q.top();
 visited[u.node]=true;
 for(i=0;i<edge[u.node].size();i++)
 {
  // if(visited[u.city]==true && visited[v.city]==true)
  //   continue;
 // printf("%d %d\n",edge[u.node][i],cost[u.node][i]);
 v.node=edge[u.node][i];
 v.dist=cost[u.node][i];
 }
 //for(i=0;i<edge[u.node].size();i++)
 {
  // printf("%d %d\n",edge[u.node][i],cost[u.node][i]);
 }
 while(!q.empty())
 {
   u=q.top();
   printf("%d %d\n",u.node,u.dist);
   q.pop();
 }
 return ;
}

int main()
{
  int i,j,k,l,m,n,city,road,x,y;
  scanf("%d%d",&city,&road);
  for(i=0;i<road;i++)
  {
    scanf("%d%d%d",&x,&y,&k);
    edge[x].push_back(y);
    edge[y].push_back(x);
    cost[x].push_back(k);
    cost[y].push_back(k);
  }
  tree();
}
