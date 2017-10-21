#include<cstdio>

using namespace std;
typedef unsigned long long int bnum;

bnum ara[100][100]= {0};

bnum rec(int n,int b)
{
    // printf("%d %d\n",n,b);
    int i;

    if(n<=1) return 1;
    if(ara[n][b]!=0)
        return ara[n][b];

    ara[n][b]=1;
    for(i=1; i<=b; i++)
        ara[n][b]+=rec(n-i,b);
    return ara[n][b];
}

int main()
{
    int i,j,k,n,b;
    i=0;
    while(scanf("%d%d",&n,&b)==2)
    {
        i++;
        if(n>60)
            return 0;
        //  k=rec(n,b);

        //   for(j=1;j<=10;j++)
        //   printf("%lld\n",ara[j][j]);

        printf("Case %d: %llu\n",i,rec(n,b));
    }
}
