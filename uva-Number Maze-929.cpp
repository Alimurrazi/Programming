#include<stdio.h>
#include<queue>
#include<vector>
#include<string.h>
using namespace std;

bool check[1003][1003];
long cost[1003][1003];
long d[1003][1003];
long m,n;

long px[5]= {0,1,0,-1};
long py[5]= {1,0,-1,0};

struct data
{
    long u,v,dist;
    bool operator < (const data & p)const
    {
        if(p.dist>dist)
        return false;
        return true;
    }
};

priority_queue<data>q;

void bfs(long x,long y)
{
    data t,p;
    int i,j,a,b,c;
    t.u=x;
    t.v=y;
    t.dist=0;
    d[x][y]=cost[x][y];
    q.push(t);
    while(!q.empty())
    {
        t=q.top();
        x=t.u;
        y=t.v;
        check[x][y]=true;
        q.pop();
        for(i=0; i<4; i++)
        {
            a=x+px[i];
            b=y+py[i];
            if(a>0 && a<=m && b>0 && b<=n && check[a][b]==false)
            {
                if((d[x][y]+cost[a][b])<d[a][b])
                {
                    d[a][b]=d[x][y]+cost[a][b];
                    t.u=a;
                    t.v=b;
                    t.dist=d[a][b];
                    q.push(t);
                }
            }
        }
    }
    printf("%ld\n",d[m][n]);
}

int main()
{
    long i,j,k,l,test;
    scanf("%ld",&test);
    while(test--)
    {
        memset(check,false,sizeof(check));
        scanf("%ld%ld",&m,&n);
        for(i=1; i<=m; i++)
        {
            for(j=1; j<=n; j++)
            {
                scanf("%ld",&k);
                cost[i][j]=k;
                d[i][j]=2147483640;
            }
        }
        bfs(1,1);
    }
}
