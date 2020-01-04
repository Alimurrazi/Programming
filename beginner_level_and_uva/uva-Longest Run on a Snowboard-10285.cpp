/*
  2
  rana 2 2
  4 3
  1 2
*/
#include<stdio.h>
#include<string.h>
#include<vector>
#include<queue>
using namespace std;

//vector<int>edge[105];
int cost[105][105];
bool check[105][105];
int d[105][105];
int row,coloum,big;

int px[5]= {0,1,0,-1};
int py[5]= {1,0,-1,0};

struct data
{
    int u,v,dist;

    bool operator < (const data & p)const
    {
        if(p.dist>dist)
            return false;
        return true;
    }

};

priority_queue<data>q;

void bfs(int fx,int fy)
{
    int i,j,k,l,x,y,ucost,vcost;
    data t,p;
    memset(check,false,sizeof(check));
    memset(d,0,sizeof(d));
    t.u=fx;
    t.v=fy;
    t.dist=cost[fx][fy];
    d[fx][fy]=0;
    q.push(t);
    while(!q.empty())
    {
        p=q.top();
        q.pop();
        fx=t.u;
        fy=t.v;
        ucost=t.dist;
        check[fx][fy]=true;
        printf("fx=%d fy=%d\n",fx,fy);
        for(i=0; i<4; i++)
        {
            x=fx+px[i];
            y=fy+py[i];
            printf("lx=%d ly=%d\n",x,y);
            if(x>=0 && x<row && y>=0 && y<coloum && check[x][y]==false)
            {
                printf("v=%d v=%d\n",x,y);
                if(cost[x][y]<=ucost)
                {
                    printf("x=%d y=%d\n",x,y);
                    d[x][y]=d[fx][fy]+1;
                    if(d[x][y]>big)
                        big=d[x][y];
                     t.u=x;
                     t.v=y;
                     t.dist=cost[x][y];
                     printf("t.u===%d t.v===%d\n",t.u,t.v);
                     q.push(t);
                }
            }
        }
        /*
        for(i=0;i<2;i++)
        {
         for(j=0;j<2;j++)
         printf("i==%d j==%d %d\n",i,j,d[i][j]);
        }
        */
    }

}

int main()
{
    char str[10000];
    int i,j,k,l,t,n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s%d%d",str,&row,&coloum);
        for(i=0; i<row; i++)
        {
            for(j=0; j<coloum; j++)
            {
                scanf("%d",&cost[i][j]);
            }
        }
        big=0;
       // for(i=0; i<row; i++)
        {
         //   for(j=0; j<coloum; j++)
            {
           //     bfs(i,j);
           bfs(0,0);
            }
        }
        printf("%d\n",big);
    }
}
