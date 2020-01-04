#include<stdio.h>
#include<string.h>
#include<vector>
#include<queue>
#include<iostream>
using namespace std;

vector<long long>edge[100];
vector<long long>cost[100];

int bfs(long long start,long long dist)
{
    long long i,j,k,l,m,n,u,v;
    queue<long long>q;
    long long value[100];
    for(i=0; i<3; i++)
        value[i]=2147483640;
    q.push(start);
    value[start]=0;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(i=0; i<edge[u].size(); i++)
        {
            v=edge[u][i];
            if((value[u]+cost[u][i])<value[v])
            {
                value[v]=value[u]+cost[u][i];
                q.push(v);
            }
        }
    }
    k=value[dist];
    return k;
}

int main()
{
    long long i,j,k,l,m,n,a,b,c;
    cin>>a>>b>>c;
    edge[0].push_back(1);
    edge[1].push_back(0);
    cost[0].push_back(a);
    cost[1].push_back(a);

    edge[0].push_back(2);
    edge[2].push_back(0);
    cost[0].push_back(b);
    cost[2].push_back(b);

    edge[1].push_back(2);
    edge[2].push_back(1);
    cost[1].push_back(c);
    cost[2].push_back(c);
    k=0;
    k=k+bfs(0,1);
    k=k+bfs(0,2);
    k=k+bfs(1,2);
    cout<<k<<endl;
}
