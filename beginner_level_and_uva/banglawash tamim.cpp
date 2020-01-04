#include<bits/stdc++.h>
using namespace std;
int main ()
{

    int T,n;
    scanf("%d",&T);
    for(int j=1;j<=T;j++)
    {
        int b=0,w=0,t=0;
        scanf("%d",&n);
        char a[n+1];
        cin>>a;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='B')
                b++;
            else if(a[i]=='W')
                w++;
            else if(a[i]=='T')
                t++;

        }
        if(b==n)
            printf("Case %d: BANGLAWASH ",j);
        else if(w==n)
            printf("Case %d: WHITEWASH ",j);
        else if(b>w)
            printf("Case %d: BANGLADESH %d - %d ",j,b,w);
        else if(b<w)
            printf("Case %d: WWW %d - %d ",j,w,b);
        else if(b==0||w==0)
            printf("Case %d: ABANDONED ",j);

        else if(b==w)
            printf("Case %d: DRAW %d %d ",j,b,w);



    }
    return 0;
}
