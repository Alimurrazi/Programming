#include<stdio.h>
#include <bits/stdc++.h>
int main()
{
    int ara[100005];
    int i,j,k,l,m,n,t;
    while(scanf("%d",&n)==1)
    {
        k=1;
        ara[0]=0;
        for(i=1; i<=n; i++)
        {
            ara[k]=1;
            while(1)
            {
                if(ara[k]!=ara[k-1])
                {
                    k++;
                    break;
                }
                else
                {
                    ara[k-1]=ara[k-1]+1;
                    ara[k]=0;
                    k--;
                }
            }
        }
        for(i=1; i<k; i++)
        {
            if(i!=1)
                printf(" ");
            printf("%d",ara[i]);
        }
        printf("\n");
    }
}
