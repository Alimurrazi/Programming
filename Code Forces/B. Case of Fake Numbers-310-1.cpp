#include<bits\stdc++.h>
using namespace std;

int ara[1005];
int n;

int foro(int f,int t)
{
    int need=0;
    if(f==t)
        return 0;
    else
    {
        if(t>f)
            need=t-f;
        else
        {
            need=(n-f);
            need=need+(t-0)+1;
        }
    }
    return need;
}

int fore(int f,int t)
{
    int need=0;
    if(f==t)
        return 0;
    else
    {
        if(f>t)
            need=f-t;
        else
        {
            need=f-0;
            need=need+(n-t)+1;
        }
    }
    return need;
}

int main()
{
    int i,j,k,l,m,t,dist,sdist;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
            scanf("%d",&ara[i]);
        if(ara[1]==0)
            sdist=0;
        else
            sdist=(n-ara[1]);
        k=sdist;
        n=n-1;
        for(i=2; i<=(n+1); i++)
        {
            if(i%2==1)
                k=foro(ara[i],i-1);
            else
                k=fore(ara[i],i-1);
            if(k!=sdist)
                break;
        }
        if(k==sdist)
            printf("Yes\n");
        else
            printf("No\n");
    }
}
