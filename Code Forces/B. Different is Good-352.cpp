#include<stdio.h>
#include<string.h>
int main()
{
    char str[100005];
    int ara[100];
    int i,j,k,l,m,n,t,q,a,b;
    while(scanf("%d",&n)==1)
    {
        if(n>26)
            printf("-1\n");
        else
        {
            memset(ara,0,sizeof(ara));
            scanf("%s",str);
            for(i=0; i<n; i++)
            {
                ara[str[i]-'a'+1]++;
            }
            k=0;
            for(i=1; i<=26; i++)
            {
                if(ara[i]!=0)
                {
                    //       printf("l====%d\n",ara[i]);
                    k=k+ara[i]-1;
                }
            }
            printf("%d\n",k);
        }
    }
}
