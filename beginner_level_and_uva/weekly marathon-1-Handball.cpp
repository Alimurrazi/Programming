#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,p;
    while(scanf("%d%d",&n,&m)==2)
    {
        l=0;
        for(i=0; i<n; i++)
        {
            p=0;
            for(j=0; j<m; j++)
            {
                scanf("%d",&k);
                if(k==0)
                    p=1;
            }
            if(p==0)
                l++;
        }
        printf("%d\n",l);
    }
}
