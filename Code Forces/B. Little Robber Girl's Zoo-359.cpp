#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int ara[200];
    int i,j,k,l,m,n,t,r;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
        }
        int a=0,b=0;
     //   ara[n+1]=ara[n+2]=2147483645;
        while(1)
        {
            a=0,b=0;
            for(i=1; ; )
            {

                if((i+1)>n)
                {
                  //  printf("%d\n",i);
               //  r=n;
                 break;
                }
                if(ara[i]>ara[i+1])
                {
                    swap(ara[i],ara[i+1]);
                    if(a==0)
                        l=i;
                    a=1;
                    r=i+1;
                    i=i+2;
                }
                else
                {
                    if(a==1)
                    {
                        break;
                    }
                    i++;
                }
            }
/*
            for(i=1;i<=n;i++)
            {
              printf(" %d",ara[i]);
             // printf("\n");
            }
            printf("\n");
 */
            if(a==0 && b==0)
                break;
            printf("%d %d\n",l,r);
        }
    }
}
