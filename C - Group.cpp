/*
1
5 2
3 1 2 5 4
2 4
*/

#include<stdio.h>
#include<string.h>

bool check[100005];
int ara[100005];

int main()
{
    int i,j,k,l,m,n,o,p,q,r,t,a,b;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&n,&m);
        for(j=1; j<=n; j++)
        {
            scanf("%d",&ara[j]);
        }
        for(j=1; j<=m; j++)
        {
            k=0;
            memset(check,false,sizeof(check));
            scanf("%d%d",&a,&b);
            for(l=a; l<=b; l++)
            {
                check[ara[l]]=true;
                //     printf("k===%d\n",ara[l]);
            }
            p=0,q=0;
            for(l=1; l<=n; l++)
            {
                if(check[l]==true && p==0)
                {
                    p=1;
                    k++;
                }
                if(check[l]==false)
                {
                    p=0;
                }
            }
            printf("%d\n",k);
        }
    }
}
