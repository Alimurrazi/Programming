#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>
using namespace std;

vector<int>edge[100];
bool check[100];

void bfs(int n)
{
  int i,j,k,l,m,u,v;
  queue<int>q;
  q.push(n);
  while(!q.empty())
  {
    u=q.front();
    check[u]=true;
    q.pop();
    for(i=0;i<edge[u].size();i++)
    {
      v=edge[u][i];
      if(check[v]==false)
      {
        q.push(v);
        check[v]=true;
      }
    }
  }
}

int main()
{
  int i,j,k,l,m,n,t,x,y,coun;
  char str[20];
  char ch;
  scanf("%d%*c%*c",&t);
  while(t--)
  {
    scanf("%c%*c",&ch);
    l=ch;
    while(gets(str))
    {
     if(str[0]=='\0')
     break;
      x=str[0];
      y=str[1];
      edge[x].push_back(y);
      edge[y].push_back(x);
    }
   memset(check,false,sizeof(check));
   coun=0;
   for(i=65;i<=l;i++)
   {
   if(check[i]==true)
   continue;
   coun++;
   bfs(i);
   }
   printf("%d\n",coun);
   if(t>0)
   printf("\n");
   for(i=65;i<=l;i++)
   edge[i].clear();
  }
}
