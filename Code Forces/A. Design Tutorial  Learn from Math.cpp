#include<stdio.h>
#include<string.h>

bool check[1000005];

int main()
{
    int x,y,i,j,k,l,m,n,b=1000005;
    memset(check,true,sizeof(check));
    check[1]=true;
    for(i=2; i*i<=b; i++)
    {
        if(check[i]==true)
        {
            for(j=i*2; j<=b; j=j+i)
                check[j]=false;
        }
    }
    while(scanf("%d",&n)==1)
    {
        for(i=4 ; i<=n ; i++)
        {
            if(check[i]==false && check[n-i]==false)
            {
                x=i;
                y=n-i;
                break;
            }
        }
        printf("%d %d\n",x,y);
    }
}
