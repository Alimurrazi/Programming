#include<stdio.h>
#include<vector>
#include<queue>
#include<map>
#include<iostream>
#include<string.h>
using namespace std;

map<string,
vector < string > >edge;
string s1,s2,start,finish;
map<string,int>visited;
map<string,int>check;
map<string,string>parent;

int bfs(string start,string finish)
{
  int i,j,k,l,m,n;
  string u,v;
  queue<string>q;
  if(start==finish)
  {
    cout<<start<<" "<<finish<<endl;
    return 0;
  }
  if(visited[start]!=1000000 || visited[finish]!=1000000 )
    {
   printf("No route\n");
   return 0;
  }
  q.push(start);
  visited[start]=0;
  parent[start]=start;

  while(!q.empty())
  {
    u=q.front();
    q.pop();
    for(i=0;i<edge[u].size();i++)
    {
     v=edge[u][i];
     if((visited[u]+1)<visited[v])
     {
       visited[v]=visited[u]+1;
       q.push(v);
       parent[v]=u;
     }
    }
  }
  if(visited[finish]==1000000)
  {
   printf("No route\n");
   return 0;
  }

  return 1;
}

void rasta(string u,string v)
{
  if(u==v)
    return ;

  rasta(parent[u],v);
  cout<<parent[u]<<" "<<u<<endl;
}

int main()
{
  int i,j,k,l,m,n;
  l=0;
  queue<string>city;
  string top;
  while(scanf("%d",&n)!=EOF)
  {
   for(i=0;i<n;i++)
   {
   cin>>s1>>s2;
   edge[s1].push_back(s2);
   edge[s2].push_back(s1);
   city.push(s1);
   city.push(s2);
   visited[s1]=1000000;
   visited[s2]=1000000;
   }
  cin>>start>>finish;
    if(l==1)
   printf("\n");
   l=1;
  k=bfs(start,finish);
  if(k==1)
  rasta(finish,start);

 while(!city.empty())
 {
  top=city.front();
  city.pop();
  edge[top].clear();
 }

 }
}
