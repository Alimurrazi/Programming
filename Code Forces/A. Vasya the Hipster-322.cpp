#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int i,j,k,l,m,n,r,b,big,sm;
    while(scanf("%d%d",&r,&b)==2)
    {
        sm=min(r,b);
        big=max(r,b);
        k=(big-sm)/2;
        printf("%d %d\n",sm,k);
    }
}
