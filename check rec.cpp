#include <stdio.h>
using namespace std;
typedef unsigned long long int bnum;

bnum ara[100][100]={0};

bnum rec (int n, int b)
{
    int i;
    if (n <= 1) return 1;
    if (ara[n][b] != 0)
        return ara[n][b];

    ara[n][b] = 1;
    for (i=1; i<=b; i++)
        ara[n][b] += rec(n-i,b);
    return ara[n][b];
}
int main()
{
    int n, b, Case=1;
    while (scanf("%d%d",&n,&b)){
        if (n > 60) break;
        printf("Case %d: %llu\n",Case++,rec(n,b));
    }
    return 0;
}
