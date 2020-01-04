#include<stdio.h>
#include<string.h>
#include<vector>
#include<queue>
using namespace std;

vector<int>edge[100005];
bool check[100005];
int coun;

void bfs(int n)
{
  int i,j,k,l,u,v;
  queue<int>q;
  q.push(n);
//  if(edge[n].size()==0)
 //  return ;
  while(!q.empty())
  {
    u=q.front();
    check[u]=true;
    q.pop();
    for(i=0;i<edge[u].size();i++)
    {
      v=edge[u][i];
      if(check[v]==false)
      q.push(v);
    }
   edge[u].clear();
  }
}

int main()
{
  int i,j,k,l,t,n,m,x,y;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d%d",&n,&l);
    for(i=0;i<l;i++)
    {
     scanf("%d%d",&x,&y);
     edge[x].push_back(y);
     edge[y].push_back(x);
    }
    memset(check,false,sizeof(check));
   coun=0;
   for(i=1;i<=n;i++)
   {
    if(check[i]==false)
    {
    bfs(i);
    coun++;
    }
   }
   printf("%d\n",coun);
   //for(i=1;i<=n;i++)
   //edge[i].clear();
  }
}
