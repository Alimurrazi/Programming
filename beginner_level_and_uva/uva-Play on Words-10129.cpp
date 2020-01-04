#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;

vector<int>edge[30];
vector<int>ans;
int degree[30];
int pathdegree[30][30];
int pathdegree1[30][30];
int ara[30];
bool check[30];

void dfs(int u)
{
  //  printf("%d\n",u);
    int i,j,k,l,m,v;
    for(i=0; i<edge[u].size(); i++)
    {
        v=edge[u][i];
        if(pathdegree[u][v]!=0)
        {
            pathdegree[u][v]--;
            ans.push_back(v);
            dfs(v);
        }
    }
   // ans.push_back(u);
}

int main()
{
    char str[100];
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    while(t--)
    {
        memset(degree,0,sizeof(degree));
        memset(pathdegree,0,sizeof(pathdegree));
        memset(pathdegree1,0,sizeof(pathdegree1));
        memset(check,false,sizeof(check));
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%s",str);
            k=str[0]-'a'+1;
            if(check[k]==false)
                check[k]=true;
            l=strlen(str);
            l=str[l-1]-'a'+1;
            if(check[l]==false)
                check[l]=true;
            edge[k].push_back(l);
            pathdegree[k][l]++;
            pathdegree1[k][l]++;
        }
        /*
        dfs(1);
                   for(i=0;i<ans.size();i++)
            printf("%d\n",ans[i]);
        break;
        */
        for(i=1; i<=26; i++)
        {
            if(check[i])
            {
                ans.push_back(i);
                dfs(i);
                printf("size==%d\n",ans.size());
              //  return 0;
            }
            else
                continue;
            if(ans.size()==(n+1))
            {
                printf("Ordering is possible.\n");
                break;
            }
            ans.clear();
            for(k=1; k<=26; k++)
            {
                if(check[k]==false)
                continue;
                for(l=1; l<=26; l++)
                {
                    pathdegree[k][l]=pathdegree1[k][l];
                }
            }
        }
        if(i>26)
            printf("The door cannot be opened.\n");
    }
}
