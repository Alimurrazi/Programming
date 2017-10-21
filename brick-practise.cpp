#include <stdio.h>
int main()
{
    int n , a=0;
    while(scanf("%d",&n)==1 && n!=0){
        //if(a) printf("\n");
        int h[n],i,avg,sum=0,ans=0;
        for(i=0;i<n;i++) {
                scanf("%d",&h[i]);
                sum+=h[i];
        }
        avg=sum/n;
        ans=sum-avg*n;
        for(i=0;i<n;i++)
            if(h[i]<avg) ans+=(avg-h[i]);

        printf("Set #%d\n",++a);
        printf("The minimum number of moves is %d.\n\n",ans);




    }
    return 0;
}
