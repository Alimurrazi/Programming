#include<stdio.h>
int main()
{
    int ara[150005];
    int ara1[150005];
    int i,j,k,l,m,n,t,p,q;
    while(scanf("%d%d",&n,&k)==2)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
        }
        int in=1;
        p=0,q=0;
        for(i=1; i<=k; i++)
        {
            p=p+ara[i];
        }
        ara1[k]=p;
        for(i=k+1;i<=n;i++)
        {
            ara1[i]=ara1[i-1]-ara[i-k]+ara[i];
        }
        p=2147483640;
        for(i=k;i<=n;i++)
        {
            if(ara1[i]<p)
            {
                p=ara1[i];
                in=i-k+1;
            }
        }
        /*
        for(i=k+1; i<=n; i++)
        {
            q=(p-ara[i-k])+ara[i];
            if(q<p)
            {
              //  if(n==150000 && ara[1]==83)
                {
                //    printf("p==%d a[i-k]==%d a[i]==%d in==%d q==%d\n",p,ara[i-k],ara[i],in,q);
                }
                p=q;
                in=i-k+1;
            }
        }
        */
        printf("%d\n",in);
    }
}
