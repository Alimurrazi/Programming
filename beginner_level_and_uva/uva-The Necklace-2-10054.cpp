#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;

vector<int>edge[55];
vector<int>ans;
int degree[55][55];
int dcheck[55];

void dfs(int u)
{
    int i,j,k,l,m,v;
    for(i=0; i<edge[u].size(); i++)
    {
        v=edge[u][i];
        if(degree[u][v]!=0)
        {
            degree[u][v]--;
            degree[v][u]--;
            dfs(v);
        }
    }
    ans.push_back(u);
}

int eulercheck()
{
    int i,j,k,l,m;
    for(i=1; i<=50; i++)
    {
        if((dcheck[i]%2)!=0)
        {
            printf("some beads may be lost\n");
            return 1;
        }
    }
    return 0;
}

int main()
{
    int i,j,k,l,m,n,t,x,y;
    scanf("%d",&t);
    for(j=1; j<=t; j++)
    {
        memset(degree,false,sizeof(degree));
        memset(dcheck,0,sizeof(dcheck));
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d%d",&x,&y);
            edge[x].push_back(y);
            edge[y].push_back(x);
            degree[x][y]++;
            degree[y][x]++;
            dcheck[x]++;
            dcheck[y]++;
        }
        if(j!=1)
            printf("\n");
        printf("Case #%d\n",j);
        k=eulercheck();
        if(k==0)
        {
            for(i=1;i<=50;i++)
            {
            if(dcheck[i])
            {
            dfs(i);
            break;
            }
            }
            for(i=0; i<ans.size()-1; i++)
                printf("%d %d\n",ans[i],ans[i+1]);
            ans.clear();
        }
        for(i=1; i<=50; i++)
        {
            if(!edge[i].empty())
                edge[i].clear();
        }
    }
}
