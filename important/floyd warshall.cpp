#include<stdio.h>
#include<vector>
using namespace std;

int path[100][100];
int root[100][100];

void finding(int i,int j)
{
    if(i!=j)
        finding(i,root[i][j]);
    printf("%d\n",j);
}

int main()
{

    int i,j,k,l,m,n,x,y,node,start,destination;
    while(scanf("%d%d",&node,&n)==2)
    {

        for(i=1; i<=node; i++)
        {
            for(j=1; j<=node; j++)
            {
                path[i][j]=100000000;
                if(i==j)
                    path[i][j]=0;
                root[i][j]=i;
            }
        }

        for(i=0; i<n; i++)
        {
            scanf("%d%d%d",&x,&y,&k);
            path[x][y]=k;
            path[y][x]=k;
        }
        scanf("%d%d",&start,&destination);
        for(k=1; k<=node; k++)
        {
            for(i=1; i<=node; i++)
            {
                for(j=1; j<=node; j++)
                {
                    if((path[i][k]+path[k][j])<path[i][j])
                    {
                        path[i][j]=path[i][k]+path[k][j];
                        root[i][j]=root[k][j];
                    }
                }
            }
        }

        for(i=1; i<=node; i++)
        {
            for(j=1; j<=node; j++)
            {
                printf("%d %d %d\n",i,j,path[i][j]);
            }
        }
        finding(start,destination);
    }
}
