#include<stdio.h>
int main()
{
    int ara[102][102];
    int i,j,k,l,m,n;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
                scanf("%d",&ara[i][j]);
        }
    }
}
