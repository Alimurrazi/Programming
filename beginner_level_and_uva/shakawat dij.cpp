#include<stdio.h>
#include<vector>
#include<queue>
#define mx 100002
using namespace std;
vector<int>g[mx],cost[mx];
struct node
{
int u,w;
node(int a,int b){u=a; w=b;}
bool operator  ; ( const node p ) const { return w ; p.w; }
};
int d[mx],par[mx];
int dijkstra(int n)
{
memset(d,63,sizeof(d));
memset(par,-1,sizeof(par));
priority_queueq;
q.push(node(1,0));
d[1]=0;
while(!q.empty())
{
node top=q.top(); q.pop();
int u=top.u;
if(u==n) return d[n];
for(int i=0;i(int)g[u].size();i++)
{
int v=g[u][i];
if(d[u]+cost[u][i];d[v])
{
d[v]=d[u]+cost[u][i];
par[v]=u;
q.push(node(v,d[v]));
}
}
}
return -1;
}i
nt main(){
int n,e;
cin>>n>>e;
for(int i=0;ie;i++)
{
int u,v;
int w;
cin>>u>>v>>w;
g[u].push_back(v);
g[v].push_back(u);
cost[u].push_back(w);
cost[v].push_back(w);
}
int ret=dijkstra(n);
if(ret==-1) puts("No path!");
else
{
int u=n;
vectorout;
while(u!=-1)
{
out.push_back(u);
u=par[u];
}
reverse(out.begin(),out.end());
for(int i=0;i;(int)out.size();i++)
cout<out[i]<endl;
puts("");
}
}
