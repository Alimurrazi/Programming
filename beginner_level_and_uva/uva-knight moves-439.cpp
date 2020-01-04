#include<stdio.h>
#include<string.h>
#include<queue>
using namespace std;

int xc[10]={-1,1,-2,2,-2,2,-1,1};
int yc[10]={2,2,1,1,-1,-1,-2,-2};
int fx,fy;

void bfs(int x,int y)
{
 int i,j,k,l,vx,vy,ux,uy;
 queue<int>q;
 bool colour[200][200];
 memset(colour,false,sizeof(colour));
 int cost[200][200];
 memset(cost,0,sizeof(cost));
 q.push(x);
 q.push(y);
 cost[x][y]=0;
 while(!q.empty())
 {
  ux=q.front();
  q.pop();
  uy=q.front();
  q.pop();
  colour[ux][uy]=true;
  for(i=0;i<8;i++)
  {
    vx=ux+xc[i];
    vy=uy+yc[i];
    if((vx>=97 && vx<=104)&&(uy>=1 && uy<=8))
    {
      if(colour[vx][vy]==false)
      {
        q.push(vx);
        q.push(vy);
        colour[vx][vy]=true;
        cost[vx][vy]=cost[ux][uy]+1;
      }
    }
  }
 }
 printf("To get from %c%d to %c%d takes %d knight moves.\n",x,y,fx,fy,cost[fx][fy]);
}

int main()
{
 char cx,cx1,mj;
 int i,j,k,l,x,y,y1;
 while(scanf("%c%d %c%d%*c",&cx,&y,&cx1,&fy)!=EOF)
 {
   x=cx;
   fx=cx1;
 //  printf("x=%d y=%d fx=%d fy=%d\n",x,y,fx,fy);
   bfs(x,y);
 }
}
