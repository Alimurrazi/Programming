#include<stdio.h>
int main()
{
    int ara[10005];
    int ara[105][105];
    int q,i,j,k,l,m,n,t,key,r,c,qx,qy,f;
    while(scanf("%d%d%d",&n,&m,&q)==3)
    {
        l=1;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                ara[i][j]=l;
                l++;
            }
        }
        for(i=1; i<=q; i++)
        {
            scanf("%d",&key);
            if(key==1)
            {
                scanf("%d",&r);
                for()
            }
            else if(key==2)
            {
                scanf("%d",&c);
            }
            else
            {
                scanf("%d%d%d",&qx,&qy,&f);
            }
        }
    }
}
