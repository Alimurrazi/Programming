#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,t,x1,y1,x2,y2,x,y;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        printf("Case %d:\n",i);
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        scanf("%d",&n);
        for(j=1; j<=n; j++)
        {
            scanf("%d%d",&x,&y);
            if(x>=x1 && x<=x2 && y>=y1 && y<=y2)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
}
