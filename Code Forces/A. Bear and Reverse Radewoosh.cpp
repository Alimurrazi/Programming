#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int ara1[100];
    int ara2[100];
    int i,j,k,l,m,n,r,p,q,c;
    while(scanf("%d%d",&n,&c)==2)
    {
        for(i=1; i<=n; i++)
            scanf("%d",&ara1[i]);
        for(i=1; i<=n; i++)
            scanf("%d",&ara2[i]);
        k=0,l=0;
        for(i=1; i<=n; i++)
        {
            k=k+ara2[i];
            l=l+max(0,ara1[i]-k*c);
        }
        k=0,r=0;
        for(i=n; i>=1; i--)
        {
            k=k+ara2[i];
            r=r+max(0,ara1[i]-k*c);
        }
        if(l==r)
            printf("Tie\n");
        else if(l>r)
            printf("Limak\n");
        else
            printf("Radewoosh\n");
    }
}
