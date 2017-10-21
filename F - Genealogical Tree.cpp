#include<stdio.h>
#include<vector>
#include<string.h>
using namespace std;

vector<int>edge[200];
vector<int>ans;
bool check[200];
int indegree[200];
int n;

void topsort()
{
    int i,j,k,l,m,v;
    memset(check,false,sizeof(check));
    for(i=0; i<n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(indegree[j]==0 && check[j]==false)
            {
                ans.push_back(j);
                check[j]=true;
                for(l=0; l<edge[j].size(); l++)
                {
                    v=edge[j][l];
                    indegree[v]=indegree[v]-1;
                }
                break;
            }
        }
    }
}

int main()
{
    int i,j,k,l,m,t;
    while(scanf("%d",&n)==1)
    {
        memset(indegree,0,sizeof(indegree));
        for(i=1; i<=n; i++)
        {
            for(j=0; ; j++)
            {
                scanf("%d",&m);
                if(m==0)
                    break;
                edge[i].push_back(m);
                indegree[m]=indegree[m]+1;
            }
        }
        topsort();
        for(i=0; i<ans.size(); i++)
        {
            if(i>0)
                printf(" ");
            printf("%d",ans[i]);
        }
        printf("\n");
        for(i=1; i<=n; i++)
            edge[i].clear();
        ans.clear();
    }
}
