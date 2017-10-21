#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[100005];
    int i,j,l,m,n,t,p1,p2;
    while(scanf("%d%d%d",&n,&p1,&p2)==3)
    {
        for(i=0; i<n; i++)
            scanf("%d",&ara[i]);
        sort(ara,ara+i);
        if(p1>p2)
            swap(p1,p2);
        double k=0,k1=0;
   //     printf("p===%d %d\n",p1,p2);
        int c=0;
        for(i=n-1; ; i--)
        {
            k=k+ara[i];
            c++;
            if(c>=p1)
                break;
        }
        k=k/(p1*1.0);

        c=0;
        for(i=n-p1-1; ; i--)
        {
            c++;
            k1=k1+ara[i];
            if(c>=p2)
                break;
        }
        k1=k1/(p2*1.0);
        k=k+k1;
        printf("%lf\n",k);
    }
}
