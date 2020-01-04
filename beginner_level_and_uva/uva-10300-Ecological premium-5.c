#include<stdio.h>
int main()
{
    int i,j,n,f;
    unsigned long long a,b,c,sum,k;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&f);
            sum=0;
            for(j=0; j<f; j++)
            {
                scanf("%llu%llu%llu",&a,&b,&c);
                //m=a,t=b,o=c;
                k=a*c;
                sum=sum+k;
            }
            printf("%llu\n",sum);
        }
    }
    return 0;
}
