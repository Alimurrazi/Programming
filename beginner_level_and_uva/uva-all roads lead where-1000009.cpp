#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>
using namespace std;

vector<int>edge[26];
int start,finish;
char all[30][200];

void bfs(int start,int finish)
{
 int ara[30];
 int rasta[1000];
 int parent[30];
 int i,j,k,l,m,n,u,v;
 for(i=0;i<=26;i++)
 ara[i]=1000000;
 queue<int>q;
 q.push(start);
 ara[start]=0;
 while(!q.empty())
 {
   u=q.front();
   q.pop();
   for(i=0;i<edge[u].size();i++)
   {
    v=edge[u][i];
    if((ara[u]+1)<ara[v])
    {
     ara[v]=ara[u]+1;
     q.push(v);
     parent[v]=u;
    }
   }
 }
 i=0;
 u=finish;
 rasta[i]=u;
 while(1)
 {
   v=parent[u];
   i=i+1;
   rasta[i]=v;
   if(v==start)
   break;
   u=v;
 }
 for(j=i;j>=0;j--)
 {
 k=rasta[j];
 printf("%c",all[k][0]);
 }
 printf("\n");
}

int main()
{
 char str[200],str1[200];

 bool check[30];
 int i,j,k,l,m,n,t,road,que,x,y;
 scanf("%d",&t);
 while(t--)
 {
   scanf("%d%d",&road,&que);
   memset(check,false,sizeof(check));
   for(i=0;i<road;i++)
   {
     scanf("%s%s",str,str1);
     x=str[0]-'A'+1;
     y=str1[0]-'A'+1;
     edge[x].push_back(y);
     edge[y].push_back(x);
     if(check[x]==false)
     strcpy(all[x],str);
     if(check[y]==false)
     strcpy(all[y],str1);
     check[x]=true;
     check[y]=true;
   }
   for(i=0;i<que;i++)
   {
    scanf("%s%s",str,str1);
    start=str[0]-'A'+1;
    finish=str1[0]-'A'+1;
    bfs(start,finish);
   }
   for(i=1;i<=26;i++)
   edge[i].clear();
   if(t!=0)
   printf("\n");
 }
}
