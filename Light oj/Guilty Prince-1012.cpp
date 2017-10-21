#include<stdio.h>
#include<string.h>

char ara[25][25];
int w,h,coun;

int bfs(int i,int j)
{
    int k,l,m,n;
    if((i<=h && j<=w) && (i>0 && j>0) && (ara[i][j]!='#'))
    {
        coun++;
        ara[i][j]='#';
        //  bfs(i-1,j+1);
        bfs(i,j+1);
        //  bfs(i+1,j+1);
        bfs(i-1,j);
        bfs(i+1,j);
        //  bfs(i-1,j-1);
        bfs(i,j-1);
        //  bfs(i+1,j-1);
    }
    return coun;
}

int main()
{
    int i,j,k,l,m,n,t,fx,fy;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&w,&h);
        getchar();
        for(j=1; j<=h; j++)
        {
            for(l=1; l<=w; l++)
            {
                //   scanf("%s",ara[j]);
                scanf("%c",&ara[j][l]);
                if(ara[j][l]=='@')
                    fx=j,fy=l;
            }
            getchar();
        }
        //    printf("%d %d\n",w,h);
        /*
            for(j=1; j<=h; j++)
            {
                for(l=1; l<=w; l++)
                    printf("%c",ara[j][l]);
                printf("\n");
            }
            */
        //  printf("%d %d\n",fx,fy);
        coun=0;
        k=bfs(fx,fy);
        printf("Case %d: %d\n",i,k);
    }
}
