#include<stdio.h>
#include<stdlib.h>
#include<map>
#include<string.h>
#include<vector>
#include<queue>
#include<iostream>
using namespace std;

map<int,string>check1;
map<string,int>check2;
string nam1,nam2;

vector<int>depends1[30],depends2[30],ssc[30],q,node;
bool visited[30];

void dfs1(int u)
{
    int v,i;
    visited[u]=true;
    for(i=0; i<depends1[u].size(); i++)
    {
        v=depends1[u][i];
        if(visited[v]==false)
            dfs1(v);
    }
    q.push_back(u);
}

void dfs2(int u)
{
    int v,i;
    visited[u]=true;
    for(i=0; i<depends2[u].size(); i++)
    {
        v=depends2[u][i];
        if(visited[v]==false)
            dfs2(v);
    }
    node.push_back(u);
}


int main()
{
    int i,j,k,l,m,n,number,x,y,total,u,t;
    t=1;
    while(scanf("%d%d",&n,&m)==2)
    {
        if(m==0 && n==0)
            return 0;
        number=1;
        for(i=0; i<m; i++)
        {
            cin>>nam1>>nam2;
            if(!check2[nam1])
            {
                check2[nam1]=number;
                check1[number++]=nam1;
            }
            if(!check2[nam2])
            {
                check2[nam2]=number;
                check1[number++]=nam2;
            }
            x=check2[nam1];
            y=check2[nam2];
            depends1[x].push_back(y);
            depends2[y].push_back(x);
        }
        memset(visited,false,sizeof(visited));
        for(i=1; i<=n; i++)
        {
            if(visited[i]==false)
                dfs1(i);
        }
        memset(visited,false,sizeof(visited));
        total=0;
        for(i=n-1; i>=0; i--)
        {
            u=q[i];
            if(visited[u]==false)
            {
                dfs2(u);
                ssc[total++]=node;
                node.clear();
            }
        }
        if(t!=1)
        printf("\n");
        printf("Calling circles for data set %d:\n",t);
        t++;
        for(i=0; i<total; i++)
        {
            for(j=0; j<ssc[i].size(); j++)
            {
                u=ssc[i][j];
                if(j!=0)
                    printf(", ");
                cout<<check1[u];
            }
            printf("\n");
        }
        for(i=1; i<=n; i++)
        {
            depends1[i].clear();
            depends2[i].clear();
        }
        for(i=0;i<total;i++)
        ssc[i].clear();
        q.clear();
        node.clear();
        check1.clear();
        check2.clear();
    }
}
