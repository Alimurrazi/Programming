#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;

int ara[200];

void binary(int n)
{
    int i,j,k,l,m,one;
    i=0;
    while(n!=0)
    {
        ara[i++]=n%2;
        n=n/2;
    }
    ara[i++]=0;
    one=0;
    /*
    for(j=0;j<i;j++)
    printf("%d",ara[j]);
    printf("\n");
    */
    for(j=0; j<i; j++)
    {
        if(ara[j]==1)
            one++;
        if(ara[j]==1 && ara[j+1]==0)
        {
            one--;
            swap(ara[j],ara[j+1]);
            for(k=0; k<j; k++)
            {
                if(one==0)
                break;
                one--;
                ara[k]=1;

            }
            break;
        }
        else
            ara[j]=0;
    }
     int ans=0;
     /*
     for(j=0;j<i;j++)
     printf("%d",ara[j]);
     printf("\n");
     */
    for(j=0;j<i;j++)
    {
    ans=ans+ara[j]*pow(2,j);
    }
    printf("%d\n",ans);
}

int main()
{
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        printf("Case %d: ",i);
        binary(n);
    }
}
