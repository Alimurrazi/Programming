#include<stdio.h>
#include<string.h>

int main()
{
    int ara[1005];
    bool check[1005];
    int i,j,k,l,m,n,t,a;
    memset(check,true,sizeof(check));
    l=1;
    for(i=2; i*i<=1000; i++)
    {
        if(check[i]==true)
        {
            for(j=i*2; j<=1000; j=j+i)
                check[j]=false;
        }
    }
    for(i=2; i<=1000; i++)
    {
        if(check[i]==true)
            ara[l++]=i;
    }
    int num[1005];
    memset(num,0,sizeof(num));
    for(i=3; i<=1000; i++)
    {
        int p=0;
        if(check[i]==true)
        {
            a=1;
            while(1)
            {
                if((ara[a]+ara[a+1]+1)>(i))
                    break;
                if((ara[a]+ara[a+1]+1)==i)
                {
                    p=1;
                    num[i]=num[i-1]+1;
                    break;
                }
                a=a+1;
            }
        }
        if(p==0)
            num[i]=num[i-1];
    }
    while(scanf("%d%d",&n,&k)==2)
    {
        if(num[n]>=k)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
