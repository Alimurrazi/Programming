#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,t;
    while(scanf("%d%d",&n,&t)==2)
    {
        if(t==10)
        {
            if(n==1)
                printf("-1\n");
            else
            {
                printf("1");
                for(i=1; i<n; i++)
                    printf("0");
                printf("\n");
            }
        }
        else
        {
            for(i=1; i<=n; i++)
                printf("%d",t);
            printf("\n");
        }
    }
}
