#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int ara[105];
    int i,j,k,l,m,n,t,s,cap,mini;
    while(scanf("%d",&n)==1)
    {
        s=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&ara[i]);
            s=s+ara[i];
        }
        sort(ara,ara+i);
        cap=s/2;
        mini=10000000;
        for(i=n-1; i>=0; i--)
        {
            l=0;
            s=0;
            for(j=i; j>=0; j--)
            {
                s=s+ara[j];
                l++;
                if(s>cap)
                {
                    break;
                }
            }
            if(s>cap && l<mini)
                mini=l;
        }
        printf("%d\n",mini);
    }
}
