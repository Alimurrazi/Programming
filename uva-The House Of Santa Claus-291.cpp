#include<stdio.h>
#include<vector>
#include<string.h>
using namespace std;

vector<int>edge[10];
vector<int>ans;
bool pathcheck[10][10];
bool nodecheck[10];

void call( )
{
    int i,j,k,l,u,v,c;

    if(ans.size()==9)
    {
        for(i=0; i<9; i++)
        {
            printf("%d",ans[i]);
        }
        printf("\n");
      //  ans.clear();
    //  memset(pathcheck,false,sizeof(pathcheck));
    return ;
    }

    for(i=0; i<=5; i++)
    {
        if(ans.front()!=1)
            return ;
        for(j=0; j<edge[i].size(); j++)
        {
            u=edge[i][j];
            if(pathcheck[i][u]==false)
            {
                c=0;
                for(k=0; k<edge[u].size(); k++)
                {
                    l=edge[u][k];
                    if(pathcheck[u][l]==true)
                        c++;
                }
              //  if(i==5 && u==2)
              //  printf("%d %d\n",c,edge[u].size());
                if(c==(edge[u].size()-1) && ans.size()!=8)
                    continue;
                pathcheck[i][u]=true;
                pathcheck[u][i]=true;
                ans.push_back(u);
                call();
                ans.pop_back();
                pathcheck[i][u]=false;
                pathcheck[u][i]=false;
            }
        }
    }
}

int main()
{
    edge[1].push_back(2);
    edge[1].push_back(3);
    edge[1].push_back(5);

    edge[2].push_back(1);
    edge[2].push_back(3);
    edge[2].push_back(5);

    edge[3].push_back(1);
    edge[3].push_back(2);
    edge[3].push_back(4);
    edge[3].push_back(5);

    edge[4].push_back(3);
    edge[4].push_back(5);

    edge[5].push_back(1);
    edge[5].push_back(2);
    edge[5].push_back(3);
    edge[5].push_back(4);
    memset(pathcheck,false,sizeof(pathcheck));
    ans.push_back(1);
    call();
}
