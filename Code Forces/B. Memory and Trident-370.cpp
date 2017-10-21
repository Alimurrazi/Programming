#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100005];
    int i,j,k,len,m,n,t,p;
    while(scanf("%s",str)==1)
    {
        int u=0,d=0,l=0,r=0;
        len=strlen(str);
        if((len%2)!=0)
        {
            printf("-1\n");
            continue;
        }
        else
        {
            for(i=0; i<len; i++)
            {
                if(str[i]=='U')
                    u++;
                if(str[i]=='D')
                    d++;
                if(str[i]=='L')
                    l++;
                if(str[i]=='R')
                    r++;

            }
            //      printf("u==%d d==%d l==%d r==%d\n",u,d,l,r);
            n=0;
            n=fabs(u-d);
            m=fabs(l-r);
            n=(n+m)/2;
            printf("%d\n",n);
        }
    }
}
