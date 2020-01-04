#include<stdio.h>
#include<string.h>

int value(int n)
{
    int i,j,k,l;
    k=0;
    for(i=n-1; i>=1; i--)
    {
        k=k+i;
    }
    return k;
}

int main()
{
    int i,j,k,l,m,n;
    char ara[105][105];
    char str[105];
    while(scanf("%d",&n)==1)
    {
        for(i=0; i<n; i++)
        {
            scanf("%s",str);
            strcpy(ara[i],str);
        }
        int rc=0,cc=0,k=0;
        for(i=0; i<n; i++)
        {
            k=0;
            for(j=0; j<n; j++)
            {
                if(ara[i][j]=='C')
                    k++;
            }

            rc=rc+value(k);
        }
        for(i=0; i<n; i++)
        {
            k=0;
            for(j=0; j<n; j++)
            {
                if(ara[j][i]=='C')
                    k++;
            }
            cc=cc+value(k);
        }
        printf("%d\n",rc+cc);
    }
}
