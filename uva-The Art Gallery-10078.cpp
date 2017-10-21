#include<bits/stdc++.h>

struct data
{
    int x,y;
};

int main()
{
    int i,j,k,l,n,m;
    struct data sett[60];
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        return 0;
        for(i=0; i<n; i++)
        {
            scanf("%d%d",&sett[i].x,&sett[i].y);
        }
        k=0;
        for(i=2; i<n; i++)
        {
            m=(sett[i-2].x)*(sett[i-1].y-sett[i].y)+(sett[i-1].x)*(sett[i].y-sett[i-2].y)+(sett[i].x)*(sett[i-2].y-sett[i-1].y);
            if(m<=0)
            {
                k=1;
                break;
            }
        }
        if(k==0)
            printf("No\n");
        else
            printf("Yes\n");
    }
}
