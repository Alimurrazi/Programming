#include<stdio.h>
int main()
{
    int ara[100];
    int i,j,k,l,n,temp;
    scanf("%d",&n);
    for(k=1; k<=n; k++)
    {
        for(i=0; i<3; i++)
        {
            scanf("%d",&ara[i]);
        }
        for(i=0; i<3; i++)
        {
            for(j=i+1; j<3; j++)
            {
                if(ara[i]>ara[j])
                {
                    temp=ara[i];
                    ara[i]=ara[j];
                    ara[j]=temp;
                }
            }
        }
        printf("Case %d: %d\n",k,ara[1]);
    }
    return 0;
}
