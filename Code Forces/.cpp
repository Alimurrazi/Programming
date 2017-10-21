

#include<bits/stdc++.h>
using namespace std;
vector<int >graph[5001];
vector<int >ingraph[5001];
vector<int>new_graph[5001];
vector<int>scc[5001];
bool check[5001];
stack<int>ans;
int parent[5100];
int arr[5001];
void dfs1(int u)
{
    int i,j,k,l,v;
    check[u]=true;
    for(i=0;i<graph[u].size();i++)
    {
        v=graph[u][i];
        if(check[v]==false)
            dfs1(v);
    }
    ans.push(u);
}

void dfs2(int u,int node)
{
    int i,j,v;
    check[u]=true;
    for(i=0;i<ingraph[u].size();i++)
    {
        v=ingraph[u][i];
        if(check[v]==false)
        {
            scc[node].push_back(v);
            parent[v]=node;
            dfs2(v,node);
        }
    }
}
void dfs(int u,int par)
{
    int i,j,v;
    check[u]=1;
    par++;
    for(i=0;i<graph[u].size();i++)
    {
        v=graph[u][i];
        if(!check[v])
        {
            check[v]=1;
            if(parent[u]!=parent[v])
            {
                arr[parent[v]]-=par;
                dfs(v,par);
            }
        }
    }
}
int main()
{

    int A,B,E,P,i,j,a,b,k;
    while(scanf("%d %d %d %d",&A,&B,&E,&P)==4)
    {
        memset(graph,0,sizeof(graph));
        memset(ingraph,0,sizeof(ingraph));
        memset(new_graph,0,sizeof(new_graph));
        memset(check,0,sizeof(check));
        memset(scc,0,sizeof(scc));
        for(i=0;i<P;i++)
        {
           scanf("%d %d",&a,&b);
           graph[a].push_back(b);
            ingraph[b].push_back(a);
        }
        for(i=0;i<E;i++)
        {
            if(check[i]==false)
                dfs1(i);
        }
        k=0;
        for(i=0;i<E;i++)
            check[i]=0;
        while(!ans.empty())
        {

            i=ans.top();
            ans.pop();
            if(!check[i])
            {
                arr[k]=0;
                parent[i]=k;
                scc[k].push_back(i);
               dfs2(i,k++);
            }
        }
        for(i=0;i<E;i++)
            check[i]=0;
        for(i=0;i<k;i++)
        {
            a=scc[i][0];
            if(!check[a])
            {
                dfs(a,0);
            }
        }
        sort(arr,arr+k);
        for(i=0;i<k;i++)
            cout<<arr[i]<<" ";

    }
    return 0;
}
