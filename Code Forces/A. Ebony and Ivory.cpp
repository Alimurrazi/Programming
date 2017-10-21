#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        n=c/a;
        for(i=n; i>=0; i--)
        {
            k=a*i;
            m=c-k;
            if(m%b==0)
            {
                break;
            }
        }
        if(i<0)
            printf("No\n");
        else
            printf("Yes\n");
    }
}
