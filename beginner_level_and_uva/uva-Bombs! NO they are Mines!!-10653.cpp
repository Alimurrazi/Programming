#include<stdio.h>
#include<queue>
#include<vector>
#include<string.h>

using namespace std;
int dis[1000][1000];
bool bis[1000][1000];
int p[10]={-1,0,1,0};
int r[10]={0,1,0,-1};
int row,col;

int bfs(int begx,int begy,int endx,int endy)
{
  int nx,ny,mx,my,i,j,k,l;

  if(begx==endx && begy==endy)
    return dis[endx][endy];
  queue<int>q;

  q.push(begx);
  q.push(begy);

  while(!q.empty())
  {
   mx=q.front();
   q.pop();
   my=q.front();
   q.pop();
   for(i=0;i<4;i++)
   {
    nx=mx+p[i];
    ny=my+r[i];
   // if(nx==endx && ny==endy)
   //  return dis[endx][endy];

    if(nx>-1 && ny>-1 && nx<row && ny<col && bis[nx][ny]==0)
    {
       q.push(nx);
       q.push(ny);
      bis[nx][ny]=1;
      dis[nx][ny]=dis[mx][my]+1;
    }
   }
  }
  return dis[endx][endy];
}

int main()
{
 int i,j,k,l,m,n,a,b,c,d,begx,begy,endx,endy;
 while(scanf("%d%d",&row,&col)==2)
 {
  if(row==0 && col==0)
        return 0;
  memset(dis,0,sizeof(dis));
  memset(bis,0,sizeof(bis));
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d%d",&a,&b);
    for(j=0;j<b;j++)
    {
     scanf("%d",&c);
     bis[a][c]=1;
    }
  }
    scanf("%d%d",&begx,&begy);
    scanf("%d%d",&endx,&endy);
   printf("%d\n",bfs(begx,begy,endx,endy));
 }
}
