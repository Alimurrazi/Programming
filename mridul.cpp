#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<map>
#include<string>
#define max 1111

using namespace std;

char mat[max][max];
int color[max][max],R,C,cnt;

void dfs(int i,int j)
{

    if(i<0 || j<0 || i>=R || mat[i][j]=='\0')
        return;

    if(mat[i][j]=='L' || color[i][j])
        return ;

    else
    {
        cnt++;
        color[i][j]=1;

        dfs(i-1,j-1);
        dfs(i-1,j);
        dfs(i-1,j+1);
        dfs(i,j-1);
        dfs(i,j+1);
        dfs(i+1,j-1);
        dfs(i+1,j);
        dfs(i+1,j+1);
    }

}

int main()
{
    int i,j,k,cas,n,m;
    scanf("%d",&cas);
    getchar();
    getchar();

    for(int l=1; l<=cas; l++)
    {
        memset(mat,'\0',sizeof(mat));
        memset(color,0,sizeof(color));

        if(l!=1)
            printf("\n");


        k=0;
        for(i=0; ; i++)
        {
            gets(mat[i]);

            if(mat[i][0]=='\0')
                break;


            if(mat[i][0]!='W' && mat[i][0]!='L')
            {
                if(!k)
                {
                    R=i;
                    k++;
                }
                cnt=0;
                sscanf(mat[i],"%d %d",&n,&m);

                dfs(n-1,m-1);

                printf("%d\n",cnt);

                memset(color,0,sizeof(color));

            }

        }

    }

    return 0;
}
