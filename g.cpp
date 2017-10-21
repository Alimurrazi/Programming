#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[2000];
    int i,j,k,l,m,n;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
        }
        bool ch=true;
        for(i=1; i<=n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                m=ara[j]-ara[i];
                if(m<0)
                {
                    ch=false;
                    break;
                }
            }
        }
        if(ch==true)
            printf("yes\n");
        else
            printf("no\n");
    }
}
