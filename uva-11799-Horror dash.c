#include<stdio.h>
int main()
{
    int ara[200];
    int i,j,N,T,max;
    scanf("%d",&T);
    for(j=1; j<=T; j++)
    {
        scanf("%d",&N);
        for(i=0; i<N; i++)
        {
            scanf("%d",&ara[i]);
        }
        max=ara[0];
        for(i=0; i<N; i++)
        {
            if(ara[i]>=max)
                max=ara[i];
        }
        printf("Case %d: %d\n",j,max);
    }
    return 0;
}
