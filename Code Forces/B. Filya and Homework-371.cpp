#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[100005];
    int i,j,k,l,m,n,t;
    while(scanf("%d",&n)==1)
    {
        int all=0,avg=0;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
            all=all+ara[i];
        }
        avg=all/n;
        {
            m=0;
            bool check=true;
            for(i=1; i<=n; i++)
            {
                k=fabs(avg-ara[i]);
                if(k!=0)
                {
                    if(m==0)
                        m=k;
                    else if(k==m)
                        continue;
                    else
                    {
                        check=false;
                        break;
                    }
                }
            }
            if(check==true)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
}
