#include<stdio.h>
#include<vector>
#include<string.h>
using namespace std;

vector<int>serial;
vector<int>edge[100];
bool check[100];

void dfs(int start)
{
    int i,j,k,l,m,n,u,v;
    check[start]=true;
    for(i=0;i<edge[start].size();i++)
    {
    v=edge[start][i];
    if(check[v]==false)
    dfs(v);
    }
    serial.push_back(start);
}

int main()
{
    int i,j,k,l,m,node,nedge,x,y;
    while(scanf("%d%d",&node,&nedge)==2)
    {
     for(i=0;i<nedge;i++)
     {
      scanf("%d%d",&x,&y);
      edge[x].push_back(y);
     }
     memset(check,false,sizeof(check));
     for(i=1;i<=node;i++)
     {
      if(check[i]==false)
      dfs(i);
     }
     for(i=0;i<serial.size();i++)
     {
      printf("%d\n",serial[i]);
     }
     for(i=1;i<=node;i++)
     {
      edge[i].clear();
     }
     serial.clear();
    }
}
