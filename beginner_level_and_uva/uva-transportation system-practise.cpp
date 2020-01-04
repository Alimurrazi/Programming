#include<stdio.h>
#include<string.h>
#include<vector>
#include<queue>
#include<math.h>

using namespace std;
vector<int>edge[105];
vector<double>cost[105];
int n,line=0,r;

struct frakel
{
 double x,y;
};

struct data
{
 int city;
 double dist;
 bool operator < (const data & p)const
 {
  return p.dist<dist;
 }
};

void mst()
{
 int i,j,k,l,m;
 data u,v,t,d;
 double s,ans1,ans2;
 priority_queue<data>q;
 bool visited[105];

 memset(visited,false,sizeof(visited));
 k=1;
 ans1=0,ans2=0;

 for(i=1;i<n;i++)
 {
  u.city=k;
  visited[u.city]=true;

 for(j=0;j<edge[u.city].size();j++)
 {
  v.city=edge[u.city][j];
  if(visited[v.city]==false)
  {
  v.dist=cost[u.city][j];
  q.push(v);
  }
 }

  while(1)
  {
   d=q.top();
   k=d.city;
   s=d.dist;
   q.pop();
  if(visited[k]==false)
    break;
  }
  if(s>r)
  ans2=ans2+s;
  else
  ans1=ans1+s;
 }
 if(line==1)
 printf("\n");
 printf("%.2lf %.2lf\n",ans1,ans2);
 line=1;
}

int main()
{
 struct frakel koi[105];
 int i,j,k,l,t;
 double dis;
 scanf("%d",&t);

 while(t--)
 {
  scanf("%d%d",&n,&r);
  for(i=1;i<=n;i++)
  {
   scanf("%lf%lf",&koi[i].x,&koi[i].y);
  }

  for(i=1;i<=n;i++)
  {
  for(j=i+1;j<=n;j++)
  {
   dis=sqrt((koi[i].x-koi[j].x)*(koi[i].x-koi[j].x)+(koi[i].y-koi[j].y)*(koi[i].y-koi[j].y));
   edge[i].push_back(j);
   edge[j].push_back(i);
   cost[i].push_back(dis);
   cost[j].push_back(dis);
   printf("i=%d j=%d dis=%lf\n",i,j,dis);
  }
  }

  mst();
  for(i=1;i<=n;i++)
  {
   edge[i].clear();
   cost[i].clear();
  }
 }
}

