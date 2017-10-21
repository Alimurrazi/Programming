#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int ara[105];
    int ara1[105];
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    for(l=1; l<=t; l++)
    {
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
            ara1[ara[i]]=i;
        }
        k=0;
        for(i=1; i<=n; i++)
        {
            if(ara[i]!=i)
            {
                k++;
                j=ara[i];
                m=ara1[i];
                swap(ara[i],ara[m]);
                ara1[i]=i;
                ara1[j]=m;
            }
        }
        /*
        for(i=1; i<=n; i++)
        {
            if(ara[i]==i)
                k++;
        }
        k=n-k;
        if(k%2==0)
            k=k/2;
        else
            k=(k/2)+1;
            */
        /*
        for(i=1; i<=n; i++)
        {
           for(j=i+1; j<=n; j++)
           {
               if(ara[i]>ara[j])
               {
                   k++;
                   swap(ara[i],ara[j]);
               }
           }
        }
        if(k!=0)
           k=k-n;
        */
        printf("Case %d: %d\n",l,k);
    }
}
