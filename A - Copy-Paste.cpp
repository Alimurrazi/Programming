#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,l,m,n,t;
    bool check[100005];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        memset(check,false,sizeof(check));
        scanf("%d",&n);
        l=0;
        for(j=1; j<=n; j++)
        {
            scanf("%d",&m);
            if(check[m]==false)
                l++;
            check[m]=true;
        }
        printf("%d\n",l);
    }
}
