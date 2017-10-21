#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,sum;
    while(scanf("%d",&m)==1)
    {
        sum=0,k=0;
        int a=0;
        for(i=1; ; i++)
        {
            sum=sum+i;
            k=k+sum;
            if(k==m)
            {
                a=1;
                break;
            }
            if(k>m)
            {
                a=2;
                break;
            }
        }
        if(a==1)
            printf("%d\n",i);
        if(a==2)
            printf("%d\n",i-1);
    }
}
