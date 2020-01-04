#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>
#include<math.h>

using namespace std;
vector<int>edge[1003];
vector<double>cost[1003];
int r,nocity;

struct transport
{
 double x,y;
};

struct data
{
 int city;
 double dist;
 bool operator < (const data & p)const
 {
  return p.dist < dist;
 }
};

void mst()
{
 int i,j,k,l,m,n,p;
 priority_queue<data>q;
 bool check[1005];
 memset(check,false,sizeof(check));
 double s=0,ans1=0,ans2=0;
 data u,v,d;
 k=1;

 for(i=1;i<nocity;i++)
 {
  u.city=k;
  check[u.city]=true;

 for(j=0;j<edge[u.city].size();j++)
 {
  v.city=edge[u.city][j];
  if(check[v.city]==false)
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
  if(check[k]==false)
  break;
 }
  if(s>r)
  ans2=ans2+s;
  else
  ans1=ans1+s;
 }
 p=(int)ans1;
 if((fabs(ans1-p))>=.5)
 printf("%d ",p+1);
 else
 printf("%d ",p);

 p=(int)ans2;
  if((fabs(ans2-p))>=.5)
 printf("%d\n",p+1);
 else
 printf("%d\n",p);
// printf("%lf %lf\n",ans1,ans2);
}

int main()
{
 struct transport system[1003];
 int i,j,k,l,m,n,t;
 double dis;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%d%d",&nocity,&r);
  for(i=1;i<=nocity;i++)
  {
   scanf("%lf%lf",&system[i].x,&system[i].y);
  }
  for(i=1;i<=nocity;i++)
  {
   for(j=i+1;j<=nocity;j++)
   {
dis=sqrt((system[i].x-system[j].x)*(system[i].x-system[j].x)+(system[i].y-system[j].y)*(system[i].y-system[j].y));
   edge[i].push_back(j);
   edge[j].push_back(i);
   cost[i].push_back(dis);
   cost[j].push_back(dis);
   }
  }
  mst();
 for(i=1;i<=nocity;i++)
 {
  edge[i].clear();
  cost[i].clear();
 }
 }
}
