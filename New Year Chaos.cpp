#include<stdio.h>
#include<math.h>

int main()
{
    int ara[100005];
    int i,j,k,l,m,n,t,p;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        for(j=1; j<=n; j++)
        {
            scanf("%d",&ara[j]);
        }
        m=0,p=0,l=0;
        for(j=1; j<=n; j++)
        {
            k=ara[j]-j;
            //      p=ara[j]-j;
            //      if(p==-1 || p==-2)
            //          l=l+fabs(p);
            if(k==1 || k==2)
                m=m+k;
            if(k>2)
            {
                printf("Too chaotic\n");
                break;
            }
            /*
            if(p<-2)
            {
                printf("Too chaotic\n");
                break;
            }
            */
        }
        if(j>n)
        {
            // if(m!=l)
            //     printf("Too chaotic\n");
            // else
            printf("%d\n",m);
        }
    }
}
