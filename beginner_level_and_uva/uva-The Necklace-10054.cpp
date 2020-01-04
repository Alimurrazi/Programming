#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;
vector<int>edge[55];
vector<int>ans;
int n,p;
bool check[55][55];

void call(int u)
{
    int i,j,k,l,v;
    if(p==1)
        return ;

    if(ans.size()==(n*2))
    {
        p=1;
        for(i=0; i<(n*2); i++)
        {
            printf("%d %d\n",ans[i],ans[i+1]);
            i=i+1;
        }
        return ;
    }

    for(j=0; j<edge[u].size(); j++)
    {
        if(p==1)
            return ;

        v=edge[u][j];
        if(ans.size()==((n*2)-2))
        {
            if(v!=ans[0])
                continue;
        }
        if(check[u][v]==false)
        {
            check[u][v]=true;
            check[v][u]=true;
            ans.push_back(u);
            ans.push_back(v);
            call(v);
            if(p==1)
            return ;
            check[u][v]=false;
            check[v][u]=false;
            ans.pop_back();
            ans.pop_back();
        }
    }
}

int main()
{
    int i,j,k,t,x,y,high;
    scanf("%d",&t);
    {
        for(j=1; j<=t; j++)
        {
            scanf("%d",&n);
            high=0,p=0;
            for(i=0; i<n; i++)
            {
                scanf("%d%d",&x,&y);
                edge[x].push_back(y);
                edge[y].push_back(x);
                if(x>high)
                    high=x;
                if(y>high)
                    high=y;
            }
            memset(check,false,sizeof(check));
            if(j!=1)
                printf("\n");
            printf("Case #%d\n",j);
            for(i=1; i<=high; i++)
            {
                if(p==1)
                    break;
                if(edge[i].empty())
                continue;
                call(i);
            }
            if(i>high)
                printf("some beads may be lost\n");
            if(!ans.empty())
                ans.clear();
            for(i=1; i<=high; i++)
            {
                if(edge[i].empty())
                continue;
                edge[i].clear();
            }
        }
    }
}
