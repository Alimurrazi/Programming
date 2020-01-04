#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,get,out,need,t,high;
    scanf("%d",&t);
    for(l=1; l<=t; l++)
    {
        scanf("%d",&n);
        need=0;
        high=0;
        for(i=0; i<n-1; i++)
        {
            scanf("%d %d",&get,&out);
            need=need+get-out;
            if(need>high)
                high=need;
        }
        printf("Case %d: %d\n",l,high);
    }
}
