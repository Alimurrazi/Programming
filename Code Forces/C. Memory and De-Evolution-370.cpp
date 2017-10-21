#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[100];
    int i,j,k,l,m,n,t,x,y;
    while(scanf("%d%d",&x,&y)==2)
    {
        int ser=0;
        for(i=0; i<3; i++)
            ara[i]=y;
        while(1)
        {
            if(ara[0]==x && ara[1]==x && ara[2]==x)
                break;
            m=ara[1]+ara[2];
            m=m-1;
            if(m>=x)
                ara[0]=x;
            else
                ara[0]=m;
            sort(ara,ara+3);
            ser++;
        }
        printf("%d\n",ser);
    }
}
