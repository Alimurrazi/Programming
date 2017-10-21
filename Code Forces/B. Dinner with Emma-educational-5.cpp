#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,a,b,c;
    while(scanf("%d%d",&n,&m)==2)
    {
        l=0;
        for(i=1; i<=n; i++)
        {
            k=2147483647;
            for(j=1; j<=m; j++)
            {
                scanf("%d",&a);
                if(a<k)
                    k=a;
            }
            if(k>l)
                l=k;
        }
        printf("%d\n",l);
    }
}
