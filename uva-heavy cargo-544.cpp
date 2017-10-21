#include<stdio.h>
#include<string.h>
#include<map>
#include<vector>
#include<queue>
#include<iostream>
#include<stdlib.h>
using namespace std;
vector<int>edge[250],cost[250];
map < int,string > convert;
map < string,int > load;
map < string,int > visited;
map < string,int > check;
map < string,int > convert1;
string start,finish;
int nocity,noroad;

struct data
{
  int city,dist;
  bool operator < (const data & p)const
  {
  return p.dist>dist;
  }
};

void mst()
{
 int treecheck[250];
 int i,j,k,l,m,n,v;
 priority_queue<data>q;
 long long high=999999999999;
 data u,t,d;

 for(i=1;i<=nocity;i++)
 treecheck[i]=0;
 k=convert1[start];

 for(i=0;i<nocity;i++)
 {
  u.city=k;
  treecheck[u.city]=1;
  for(j=0;j<edge[u.city].size();j++)
  {
   v=edge[u.city][j];
   if(treecheck[v]!=1)
   {
    t.city=v;
    t.dist=cost[u.city][j];
    q.push(t);
   }
  }

   d=q.top();
   k=d.city;
   q.pop();

   while(1)
   {
    if(k==convert1[finish])
    {
    if(d.dist<high)
    high=d.dist;
    printf("%lld tons\n\n",high);
    while(!q.empty())
    {
      q.pop();
    }
    return ;
    }
    if(treecheck[k]!=1)
    {
    if(d.dist<high)
    high=d.dist;
      break;
    }
    d=q.top();
    k=d.city;
    q.pop();
   }
  }
 }

int main()
{
 int i,j,k,l,m,n,x,y;
 string s1,s2;
 l=1;
 while(scanf("%d%d",&nocity,&noroad)==2)
 {
  j=1;
  if(nocity==0 && noroad==0)
    return 0;
  for(i=0;i<noroad;i++)
  {
   cin>>s1>>s2>>m;
   if(check[s1]!=1)
   {
   convert1[s1]=j;
   x=j;
   j=j+1;
   }
   if(check[s2]!=1)
   {
   convert1[s2]=j;
   y=j;
   j=j+1;
   }
   if(check[s1]==1)
   {
     x=convert1[s1];
   }
   if(check[s2]==1)
   {
     y=convert1[s2];
   }
  // printf("%d %d",x,y);
   edge[x].push_back(y);
   edge[y].push_back(x);
   check[s1]=1;
   check[s2]=1;
   cost[x].push_back(m);
   cost[y].push_back(m);
  }
  cin>>start>>finish;
  printf("Scenario #%d\n",l);
  l=l+1;
  mst();
  check.clear();
  convert1.clear();
  for(i=1;i<=nocity;i++)
  {
   edge[i].clear();
   cost[i].clear();
  }
 }
}
