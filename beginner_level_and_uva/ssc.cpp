/*
  6 5
  5 6
  1 6
  1 2
  2 4
  4 1
  4 7
  7 8
  8 3
  3 7
  5 3
*/
#include<stdio.h>
#include<stack>
#include<vector>
#include<string.h>
using namespace std;
vector<int>depends[100],depends1[100];
int taken[100];
stack<int>ans,ans1;

int how=0,p=0;

void dfs(int n)
{
 int i;
 if(!taken[n])
 {
  for(i=0;i<depends[n].size();i++)
  {
   dfs(depends[n][i]);
  }
  ans.push(n);
//  printf("%d\n",n);
  taken[n]=1;
 }
}

void dfs1(int n)
{
 int i;
 if(!taken[n])
 {
  for(i=0;i<depends1[n].size();i++)
  {
 //  printf("%d\n",depends1[n][i]);
   dfs1(depends1[n][i]);
  }
  ans1.push(n);
 // printf("%d\n",n);
  taken[n]=1;
 }
}

int main()
{
 int i,j,k,l,m,n,x,y;
 memset(taken,0,sizeof(taken));
 m=11;n=8;
 for(i=0;i<m;i++)
 {
  scanf("%d%d",&x,&y);
  depends[x].push_back(y);
  depends1[y].push_back(x);
 }
 for(i=1;i<=n;i++)
 {
 dfs(i);
 }
 memset(taken,0,sizeof(taken));
 while(!ans.empty())
 {
  k=ans.top();
  printf("k=%d\n",k);
  if(taken[k]==0)
  {
  how++;
  dfs1(k);
 // dfs1(3);
  }
  ans.pop();
 }
 printf("%d\n",how);
}
