#include<stdio.h>
#include<string.h>

bool check[1005];

void full(int n)
{
    int i,j,k,l,m;
    for(i=1; ; i++)
    {
        if((i*n)>1000)
            break;
        check[i*n]=true;
    }
}

int main()
{
    int i,j,k,l,m,n;
    memset(check,false,sizeof(check));
    full(4);
    full(7);
    full(44);
    full(444);
    full(77);
    full(777);
    full(47);
    full(477);
    full(774);
    full(747);
    full(447);
    full(474);
    full(74);
    full(744);
    while(scanf("%d",&n)==1)
    {
        if(check[n]==true)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
