#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#define max 105

using namespace std;

int color[max][max],cost[max][max];

int X[8] = {-2,-1,1,2,2,1,-1,-2};
int Y[8] = {1,2,2,1,-1,-2,-2,-1};

void bfs(int x,int y)
{
    memset(color,0,sizeof(color));
    memset(cost,0,sizeof(cost));

    queue<int>Q;

    int ux,uy,vx,vy,i,j,k;

    Q.push(x);
    Q.push(y);

    cost[x][y] = 0;
    color[x][y] = 1;

    while(!Q.empty())
    {
        ux = Q.front();
        Q.pop();

        uy = Q.front();
        Q.pop();

        for(k=0; k<8; k++)
        {
            vx = ux+X[k];
            vy = uy+Y[k];

          //  if((vx>=97&& ux<=104) && (uy>=1 && uy<=8))
            {
                if(!color[vx][vy])
                {
                    cost[vx][vy] =  cost[ux][uy]+1;
                    color[vx][vy] = 1;

                    Q.push(vx);
                    Q.push(vy);

                }
            }
        }

    }
}

int main()
{
    char ch1,ch2,ch3,ch4;
    int x1,x2,y1,y2,i,j,cas;

    while(scanf(" %c%d %c%d",&ch1,&y1,&ch3,&y2)==4)
    {
        x1=ch1;

        x2 = ch3;

        bfs(x1,y1);
        printf("To get from %c%d to %c%d takes %d knight moves.\n",ch1,y1,ch3,y2,cost[x2][y2]);
    }

    return 0;
}
