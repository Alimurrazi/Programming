/*
  1
  13 12
  0 8
  1 8
  2 9
  3 9
  4 10
  5 10
  6 11
  7 11
  8 12
  9 12
  10 12
  11 12
*/
#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>
#include<stdlib.h>
using namespace std;

int city,road;
bool ccheck[210];
vector<int>edge[210];

struct record
{
  int no,value;
};
struct record boi[210];

int cmp(const void *a,const void *b)
{
  record *x=(record *) a;
  record *y=(record *) b;
  return y->value-x->value;
}

void bipartic()
{
 int i,j,k,l,u,v,gurd;
 queue<int>q;

 for(i=0;i<city;i++)
 {
   boi[i].no=i;
   boi[i].value=edge[i].size();
 }

 qsort(boi,i,sizeof(boi[0]),cmp);
 for(i=0;i<city;i++)
 printf("%d %d\n",boi[i].no,boi[i].value);
 for(i=0;i<city;i++)
 q.push(boi[i].no);
 gurd=0,l=0;

 while(!q.empty())
 {
  if(ccheck[q.front()]==false)
  {
  gurd++;
  u=q.front();
  }
  q.pop();
  if(ccheck[u]==true)
  continue;
  ccheck[u]=true;
  for(i=0;i<edge[u].size();i++)
  {
    ccheck[edge[u][i]]=true;
    l++;
  }
 }
   if(l==road)
   printf("%d\n",gurd);
  else
   printf("-1\n");
}

int main()
{
 int test,i,u,v;
 scanf("%d",&test);
 while(test--)
 {
  memset(ccheck,false,sizeof(ccheck));
//  memset(fcheck,false,sizeof(fcheck));
 scanf("%d%d",&city,&road);
 for(i=0;i<road;i++)
 {
   scanf("%d%d",&u,&v);
   edge[u].push_back(v);
   edge[v].push_back(u);
 }
 bipartic();
 for(i=0;i<city;i++)
 edge[i].clear();
 }
}
