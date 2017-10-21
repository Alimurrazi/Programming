#include<stdio.h>

int main()
{
    int row[5005];
    int col[5005];
    int timer[5005];
    int timec[5005];
    int i,j,k,l,m,n,p;
    while(scanf("%d%d%d",&m,&n,&k)==3)
    {
        for(i=1; i<=5000; i++)
        {
            row[i]=col[i]=timer[i]=timec[i]=0;
        }
        for(i=1; i<=k; i++)
        {
            scanf("%d",&l);
            if(l==1)
            {
                scanf("%d",&p);
                scanf("%d",&row[p]);
                timer[p]=i;
            }
            else
            {
                scanf("%d",&p);
                scanf("%d",&col[p]);
                timec[p]=i;
            }
        }
        //  printf("%d\n",timer[2]);
        //  return 0;
        int f=0;
        for(i=1; i<=m; i++)
        {
            l=0;
            for(j=1; j<=n; j++)
            {
                f++;
                if(l!=0)
                    printf(" ");
                if(timer[i]>timec[j])
                {
                    //            if(i==2 && row[i]==0)
                    {
                        //              printf("timer====%d\n",timer[i]);
                    }
                    printf("%d",row[i]);
                }
                else
                {
                    //    if(i==2 && col[j]==0)
                    {
                        //        printf("timec===%d timer===%d\n",timec[j],timer[i]);
                    }
                    printf("%d",col[j]);
                }
                l++;
            }
            // if(i==2)
            //     return 0;
            printf("\n");
        }
    }
}
