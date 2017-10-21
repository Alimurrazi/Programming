/*
10
2 1 0 1
0 1 100
3 3 2 0
0 1 100
0 2 200
1 2 50
2 0 0 1
2 1 0 1
0 1 100
3 3 2 0
0 1 100
0 2 200
1 2 50
2 0 0 1
2 1 0 1
0 1 100
3 3 2 0
0 1 100
0 2 200
1 2 50
2 0 0 1
5 8 0 4
0 3 10
0 2 23
0 4 1000
3 1 55
1 2 30
1 4 82
2 4 46
3 2 10
*/
#include<stdio.h>
#include<string.h>
#include<vector>
#include<queue>
using namespace std;

vector<long long>edge[50005],cost[50005];
bool check[20002];
bool frontcheck[20002];
long long m,n,s,t;

struct data
{
    long long city,dist;
    bool operator < (const data & p)const
    {
      return p.dist>dist;
    }
};

long long bfs(long start,long finish)
{
   long long ara[50005];
   long long infinity=6000000000000000;
   long long i,j,ucost,vcost,l;
   memset(check,false,sizeof(check));
   memset(frontcheck,false,sizeof(frontcheck));
   for(i=0;i<n;i++)
   ara[i]=infinity;

   priority_queue<data>q;
   data u,v;
   u.city=start;
   u.dist=0;
   q.push(u);
   ara[start]=0;
   while(!q.empty())
   {
    u=q.top();
    q.pop();
    if(frontcheck[u.city]==true)
    continue;
    frontcheck[u.city]=true;
    ucost=ara[u.city];
    if(u.city==finish)
    {
    printf("%lld\n",ara[u.city]);
    return 0;
    }
    for(i=0;i<edge[u.city].size();i++)
    {
     v.city=edge[u.city][i];
     v.dist=ucost+cost[u.city][i];
     if(v.dist<ara[v.city])
     {
       ara[v.city]=v.dist;
       q.push(v);
     }
    }
   }

   if(ara[finish]==infinity)
   printf("unreachable\n");
   else
   printf("%lld\n",ara[finish]);
   return 0;
}

int main()
{
  long long i,j,l,x,y,k,test;
  scanf("%lld",&test);

  for(l=1;l<=test;l++)
  {
   scanf("%lld%lld%lld%lld",&n,&m,&s,&t);

   for(i=0;i<m;i++)
   {
    scanf("%lld%lld%lld",&x,&y,&k);
    edge[x].push_back(y);
    edge[y].push_back(x);
    cost[x].push_back(k);
    cost[y].push_back(k);
   }

   printf("Case #%lld: ",l);
   bfs(s,t);
   for(i=0;i<=n;i++)
   {
   edge[i].clear();
   cost[i].clear();
   }
  }
}
