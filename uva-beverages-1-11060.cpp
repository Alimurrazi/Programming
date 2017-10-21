#include<stdio.h>
#include<string.h>
#include<queue>
#include<vector>
#include<map>
#include<stdlib.h>
#include<iostream>
using namespace std;

vector<int>edge[101];
vector<int>ans;
int taken[101];
int indegree[101];
bool check[101];
int n;

void topsort()
{
 int i,j,k,l,u,v;
 queue<int>q;
 memset(check,false,sizeof(check));
 k=0;
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
  {
    if(indegree[j]==0 && check[j]==false)
    {
      ans.push_back(j);
      check[j]=true;
     for(l=0;l<edge[j].size();l++)
     {
       v=edge[j][l];
       indegree[v]=indegree[v]-1;
     }
     break;
    }
  }
 }
}

int main()
{
 int i,j,k,l,t;
 char str[60],str1[60];
 vector<string>all;
 map<string,int>m;
 string mod;
 t=0;
 while(scanf("%d",&n)==1)
 {
   t++;
   for(i=1;i<=n;i++)
   {
    cin>>mod;
    all.push_back(mod);
    m[mod]=i;
   }
  scanf("%d",&l);
  //memset(indegree,0,sizeof(indegree));
  for(i=0;i<=n;i++)
  indegree[i]=0;
  for(i=1;i<=l;i++)
  {
    scanf("%s%s",str,str1);
    edge[m[str]].push_back(m[str1]);
    indegree[m[str1]]=indegree[m[str1]]+1;
  }
  topsort();
  printf("Case #%d: Dilbert should drink beverages in this order: ",t);
  for(i=0;i<n;i++)
  {
    k=ans[i];
   // printf("%d\n",k);
    cout<<all[k-1];
    if(i==n-1)
    continue;
    printf(" ");
  }
  printf(".");
  cout<<endl<<endl;
  //for(i=0;i<=n;i++)
  all.clear();
  m.clear();
  ans.clear();
  for(i=1;i<=n;i++)
  edge[i].clear();
  }
 }

