#include<stdio.h>
#include<math.h>

int r1,r2,c1,c2;

int check(int r1,int c1,int r2,int c2)
{
    if((r1+c1)%2==0 && (r2+c2)%2==0)
        return 1;
    if((r1+c1)%2==1 && (r2+c2)%2==1)
        return 1;
    return 0;
}

int main()
{
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        k=0;
        scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
        if(check(r1,c1,r2,c2)==0)
            printf("Case %d: impossible\n",i);
        else
        {
            if(fabs(r1-r2)==fabs(c1-c2))
                printf("Case %d: 1\n",i);
            else
                printf("Case %d: 2\n",i);
        }
    }
}
