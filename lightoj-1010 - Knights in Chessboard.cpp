#include<stdio.h>
#include<string.h>

int ara[210][210];
bool check[210][210];
int m,n,ans;

void floodfill(int x,int y)
{
  //  int u,v;
  //  if(check[x][y]==false)
    {
    //    if(x<=m && y<=n && x>=1 && y>=1)
        {
          //  printf("%d %d\n",x,y);
            check[x][y]=true;
            check[x-1][y+2]=true;
            check[x+1][y+2]=true;
            check[x-2][y+1]=true;
            check[x+2][y+1]=true;
            check[x-2][y-1]=true;
            check[x+2][y-1]=true;
            check[x-1][y-2]=true;
            check[x+1][y-2]=true;
            /*
            floodfill(x-1,y+2);
            floodfill(x+1,y+2);
            floodfill(x-2,y+1);
            floodfill(x+2,y+1);
            floodfill(x-2,y-1);
            floodfill(x+2,y-1);
            floodfill(x-1,y-2);
            floodfill(x+1,y-2);
            */
        }
    }
}

int main()
{
    int i,j,k,l,t;
    scanf("%d",&t);
    for(l=1; l<=t; l++)
    {
        ans=0;
        scanf("%d%d",&m,&n);
        memset(check,false,sizeof(check));
        for(i=1; i<=m; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(check[i][j]==false)
                {   printf("%d %d\n",i,j);
                    ans=ans+1;
                    floodfill(i,j);
                }
            }
        }
        printf("%d\n",ans);
    }
}
