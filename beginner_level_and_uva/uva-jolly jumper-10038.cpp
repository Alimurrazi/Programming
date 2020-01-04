#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    int ara[3010];
    int ara1[3010];
    int i,j,k,l,m,n;
    while(scanf("%d",&n)==1)
    {
        k=0;
        for(i=0; i<n; i++)
            scanf("%d",&ara[i]);
        for(i=0; i<n-1; i++)
        {
            ara1[i]=abs(ara[i+1]-ara[i]);
        }
        sort(ara1,ara1+i);
        for(i=0; i<n-2; i++)
        {
        //    printf("%d %d\n",ara1[i+1],ara1[i]);
            if((ara1[i+1]==ara1[i]))
            {
                k=1;
                break;
            }
        }
        if(k==0)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }
}
