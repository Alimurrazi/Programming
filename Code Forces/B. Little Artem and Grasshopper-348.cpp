#include<stdio.h>
#include<string.h>
int main()
{
    int ara[100005];
    char str[100005];
    int i,j,k,l,m,n,t,p;
    while(scanf("%d",&n)==1)
    {
        scanf("%s",str);
        for(i=0; i<n; i++)
            scanf("%d",&ara[i]);
        k=0,p=0,j=0;
        for(i=0; i<n; i++)
        {
            if(str[k]=='>')
                k=k+ara[k];
            else
                k=k-ara[k];
            if(k<0 || k>=n)
            {
                p=1;
                break;
            }
            //     printf("k====%d\n",k);
        }
        if(p==1)
            printf("FINITE\n");
        else
            printf("INFINITE\n");
    }
}
