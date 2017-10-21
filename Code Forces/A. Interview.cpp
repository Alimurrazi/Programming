#include<stdio.h>
int main()
{
    int ara[1005];
    int ara1[1005];
    int i,j,k,l,m,n,t;
    while(scanf("%d",&n)==1)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&ara[i]);
        }
        for(i=0; i<n; i++)
        {
            scanf("%d",&ara1[i]);
        }
        m=0;
        int a,b;
        for(i=0; i<n; i++)
        {
            a=ara[i];
            b=ara1[i];
            k=a+b;
            if(k>m)
                m=k;

            for(j=i+1; j<n; j++)
            {
                a=a|ara[j];
                b=b|ara1[j];
                k=a+b;
                if(k>m)
                    m=k;
            }
        }
        printf("%d\n",m);
    }
}
