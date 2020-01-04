#include<stdio.h>
#include<string.h>
#include<vector>
#include<queue>
using namespace std;

vector<int>edge[110];
int cost [110];
int node,start,finish;
queue<int>q;

void longest()
{
    int u,v,ucost,vcost,i,big=0;
    for(i=1; i<=node; i++)
        cost[i]=0;
    q.push(start);
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        ucost=cost[u];
        for(i=0; i<edge[u].size(); i++)
        {
            v=edge[u][i];
            vcost=ucost+1;
            if(vcost>cost[v])
            {
                cost[v]=vcost;
                q.push(v);
                if(vcost>big)
                    big=vcost;
            }
        }
    }

    if(big==0)
    {
     printf("The longest path from %d has length %d, finishing at %d.\n\n",start,big,start);
     return ;
    }

    for(i=1;i<=node;i++)
    {
     if(cost[i]==big)
        {
            printf("The longest path from %d has length %d, finishing at %d.\n\n",start,big,i);
            return ;
        }
    }
}

int main()
{
    int i,j,k,l,m,n,x,y,t=0;
    while(1)
    {
        scanf("%d",&node);
        if(node==0)
            return 0;
        scanf("%d",&start);
        while(1)
        {
            scanf("%d%d",&x,&y);
            if(x==0 && y==0)
                break;
            edge[x].push_back(y);
        }
        t++;
        printf("Case %d: ",t);
        longest();
        for(i=1; i<=node; i++)
            edge[i].clear();
    }
}
