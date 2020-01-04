#include<stdio.h>
#include<math.h>
int main()
{
    int ara[3500],ara1[3500];
    int i,j,k,l,m,n,temp;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
        }
        j=1;
        for(i=1; i<=n; i++)
        {
            ara1[j]=fabs(ara[i]-ara[i+1]);
            if(j==n-1)
                break;
            else
                j++;
        }
        for(i=1; i<=n-1; i++)
        {
            for(j=i+1; j<=n-1; j++)
            {
                if(ara1[i]>=ara1[j])
                {
                    temp=ara1[i];
                    ara1[i]=ara1[j];
                    ara1[j]=temp;
                }
            }
       }
        for(i=1; i<=n-1; i++)
        {
            if(ara1[1]!=1 || ara1[n-1]!=n-1)
               break;
             if(i==n-1)
                break;
            if((ara1[i+1]-ara1[i])!=1)
                break;
        }
        if(i==(n-1))
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }
    return 0;
}
