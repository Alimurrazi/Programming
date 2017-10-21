#include<stdio.h>
#include<string.h>

int main()
{
    long long i,j,k,l,m,n,t;
    scanf("%lld",&t);
    char str[100];
    for(i=1; i<=t; i++)
    {
        m=0;
        printf("Case %lld:\n",i);
        scanf("%lld",&n);
        for(j=0; j<n; j++)
        {
            scanf("%s",str);
            if(strcmp(str,"donate")==0)
            {
                scanf("%lld",&k);
                m=m+k;
            }
            else
                printf("%lld\n",m);
        }
    }
}
